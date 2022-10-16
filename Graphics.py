import matplotlib.pyplot as plt
import pandas as pd
import numpy as np


def read_points(operation: str, elem_type: str, cont_type: str, opt_message=""):
    with open("cmake-build-release/results/"+operation+"/"+elem_type+".csv") as f:
        lines = f.readlines()
    cols = lines[1].strip().split(';')
    table = lines[2:]
    table = list(map(lambda t: t.strip().split(';'), table))
    df = pd.DataFrame(table, columns=cols)
    array = np.row_stack(
        [np.array(list(map(int, df[(df['Container type'] == cont_type) &
                                   (df["Optional message"] == opt_message)]['size'].values.tolist()))),
            np.array(list(map(int, df[(df['Container type'] == cont_type) &
                                      (df["Optional message"] == opt_message)]['duration, ns'].values.tolist())))])
    return array


def make_table_png(operation: str, elem_type: str, cont_type: str, out_filepath):
    with open("cmake-build-release/results/"+operation+"/"+elem_type+".csv") as f:
        lines = f.readlines()
    cols = lines[1].strip().split(';')
    table = lines[2:]
    table = list(map(lambda t: t.strip().split(';'), table))
    df = pd.DataFrame(table, columns=cols)
    fig, ax = plt.subplots(figsize=(4, 3))
    #create table
    my_table = ax.table(cellText=df[(df["Container type"] == cont_type) & (df["Optional message"] == "")].values,
                        colLabels=df.columns, loc='center')
    my_table.set_fontsize(14)
    plt.axis('off')
    plt.title(f'{operation} {cont_type} {elem_type}')
    #display table
    plt.savefig(out_filepath, dpi=fig.dpi)
    fig.clear()


def create_graphs(lst):
    a=[]
    for i, v in enumerate(lst):
        make_table_png(v[0], v[1], v[2], "images/table"+str(i+1)+".png")
        a.append(read_points(v[0], v[1], v[2]))
    fig, ax = plt.subplots(figsize=(5, 4))
    plt.rcParams.update({'font.size': 8})
    for i, v in enumerate(a):
        ax.plot(v[0], v[1], label=f"{lst[i][0]} {lst[i][1]} {lst[i][2]}")

    ax.axis("on")
    plt.legend()
    plt.savefig("images/graph.png", dpi=fig.dpi)


