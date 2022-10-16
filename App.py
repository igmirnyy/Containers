import Button
import Graphics
import pygame
from sys import exit
pygame.init()
SCREEN_WIDTH = 1280
SCREEN_HEIGHT = 720
clock = pygame.time.Clock()

pygame.font.init()
font = pygame.font.SysFont("Arial", 30)


def add_menu(screen, lst):
    B1 = Button.Button(100, 500, 200, 50, "Add")
    B2 = Button.Button(1000, 50, 200, 50, "Back")
    S1 = Button.Selector(250, 200, 200, 50, ["push_back", "push_front", "sort", "find", "pop_back", "pop_front"])
    S2 = Button.Selector(250, 300, 200, 50, ["int", "char", "double", "string"])
    S3 = Button.Selector(250, 400, 200, 50, ["vector", "deque", "list"])
    font1 = font.render("Operation", True, (0, 0, 0))
    font2 = font.render("Data type", True, (0, 0, 0))
    font3 = font.render("Container type", True, (0, 0, 0))
    list_font = font.render("Graph lines:", True, (0, 0, 0))
    buttons = []
    run = True
    while run:
        del_indices = set()
        screen.fill((255, 255, 255))
        for i, v in enumerate(lst):
            buttons.append(Button.Button(800, 200 + 50 * i, 400, 50, f"{v[0]} {v[1]} {v[2]}"))
        for i, v in enumerate(buttons):
            if v.draw(screen):
                del_indices.add(i)
            pygame.draw.line(screen, "Red", (1150, 201 +50 * i), (1200, 249 + 50 * i))
            pygame.draw.line(screen, "Red", (1150, 249+50 * i), (1200, 201 + 50 * i))
        if B1.draw(screen) and len(lst) < 5 and\
                not(S1.texts[S1.cur_ind] in ("push_front", "pop_front") and S3.texts[S3.cur_ind] == "vector")\
                and (S1.texts[S1.cur_ind], S2.texts[S2.cur_ind], S3.texts[S3.cur_ind]) not in lst:
            lst.append((S1.texts[S1.cur_ind], S2.texts[S2.cur_ind], S3.texts[S3.cur_ind]))
        if B2.draw(screen):
            run = False
        screen.blit(font1, (50, 200))
        screen.blit(font2, (50, 300))
        screen.blit(font3, (50, 400))
        screen.blit(list_font, (910, 150))
        S1.draw(screen)
        S2.draw(screen)
        S3.draw(screen)
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                exit()
            if event.type == pygame.MOUSEBUTTONUP:
                for i, v in enumerate(del_indices):
                    del lst[v-i]
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-530, SCREEN_HEIGHT-580), (SCREEN_WIDTH-50, SCREEN_HEIGHT-580))
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-530, SCREEN_HEIGHT-580), (SCREEN_WIDTH-530, SCREEN_HEIGHT-200))
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-50, SCREEN_HEIGHT-580), (SCREEN_WIDTH-50, SCREEN_HEIGHT-200))
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-530, SCREEN_HEIGHT-200), (SCREEN_WIDTH-50, SCREEN_HEIGHT-200))
        pygame.display.update()
        buttons = []
        clock.tick(60)
    return lst


def plot_menu(screen, lst):
    buttons=[]
    B1 = Button.Button(50, 600, 200, 50, "Graph")
    B2 = Button.Button(0, 0, 200, 50, "Back")
    path = "images/"
    graphsurface = pygame.image.load(path+'graph.png')
    for i in range(len(lst)):
        buttons.append(Button.Button(50, 200 + 60 * i, 200, 50, "Table "+str(i+1)))
    run = True
    while run:

        screen.fill((255, 255, 255))

        for i, v in enumerate(buttons):
            if v.draw(screen):
                graphsurface = pygame.image.load(path+"table"+str(i+1)+'.png')

        if B1.draw(screen):
            graphsurface = pygame.image.load(path+'graph.png')
        if B2.draw(screen):
            run=False
        #event handler
        for event in pygame.event.get():
            #quit game
            if event.type == pygame.QUIT:
                pygame.quit()
                exit()
        graphsurface = pygame.transform.scale(graphsurface, (800, 650))
        graphsurfacerect = graphsurface.get_rect(topright=(SCREEN_WIDTH, 0))

        screen.blit(graphsurface, graphsurfacerect)
        pygame.display.update()
        clock.tick(60)


def main_menu(screen):
    B1=Button.Button(100, 600, 200, 50, "Menu")
    B2=Button.Button(100, 100, 200, 50, "Create graph")
    buttons = []
    lst = []
    list_font = font.render("Graph lines:", True, (0, 0, 0))
    run = True
    while run:
        del_indices = set()
        screen.fill((255, 255, 255))
        for i, v in enumerate(lst):
            buttons.append(Button.Button(800, 200 + 50 * i, 400, 50, f"{v[0]} {v[1]} {v[2]}"))
        for i, v in enumerate(buttons):
            if v.draw(screen):
                del_indices.add(i)
            pygame.draw.line(screen, "Red", (1150, 201 +50 * i), (1200, 249 + 50 * i))
            pygame.draw.line(screen, "Red", (1150, 249+50 * i), (1200, 201 + 50 * i))
        if B1.draw(screen):
            lst = add_menu(screen,lst)

        if B2.draw(screen):
            Graphics.create_graphs(lst)
            plot_menu(screen, lst)
        #event handler
        for event in pygame.event.get():
            #quit game
            if event.type == pygame.QUIT:
                pygame.quit()
                exit()
            if event.type == pygame.MOUSEBUTTONUP:
                for i, v in enumerate(del_indices):
                    del lst[v-i]
        screen.blit(list_font, (910, 150))
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-530, SCREEN_HEIGHT-580), (SCREEN_WIDTH-50, SCREEN_HEIGHT-580))
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-530, SCREEN_HEIGHT-580), (SCREEN_WIDTH-530, SCREEN_HEIGHT-200))
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-50, SCREEN_HEIGHT-580), (SCREEN_WIDTH-50, SCREEN_HEIGHT-200))
        pygame.draw.line(screen, (0, 0, 0), (SCREEN_WIDTH-530, SCREEN_HEIGHT-200), (SCREEN_WIDTH-50, SCREEN_HEIGHT-200))
        pygame.display.update()
        clock.tick(60)

        buttons = []


screen = pygame.display.set_mode((SCREEN_WIDTH, SCREEN_HEIGHT))
main_menu(screen)
