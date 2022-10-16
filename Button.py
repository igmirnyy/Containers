import pygame


pygame.font.init()
font = pygame.font.SysFont("Arial", 30)


class Button():
    def __init__(self, x, y, w ,h, text):
        self.clicked = False
        self.text = font.render(text, True, (0, 0, 0))
        self.rect = pygame.Rect(x,y,w,h)

    def draw(self, surface):
        action = False
        #get mouse position
        pos = pygame.mouse.get_pos()
        pygame.draw.rect(surface, (200, 200, 200), self.rect)
        #check mouseover and clicked conditions
        if self.rect.collidepoint(pos):
            pygame.draw.rect(surface, (100, 100, 100), self.rect)
            if pygame.mouse.get_pressed()[0] == 1 and self.clicked == False:
                self.clicked = True
                action = True

        if pygame.mouse.get_pressed()[0] == 0:
            self.clicked = False
        surface.blit(self.text, self.rect.topleft)
        #draw button on screen

        return action


class Selector:
    def __init__(self, x, y, w, h, texts):
        self.cur_ind = 0
        self.texts =texts
        self.text = font.render(self.texts[self.cur_ind], True, (0, 0, 0))
        self.rect = pygame.Rect(x, y, w, h)
        self.clicked = False

    def draw(self, surface):
        #get mouse position
        self.text = font.render(self.texts[self.cur_ind], True, (0, 0, 0))
        pos = pygame.mouse.get_pos()
        pygame.draw.rect(surface, (200, 200, 200), self.rect)
        #check mouseover and clicked conditions
        if self.rect.collidepoint(pos):
            pygame.draw.rect(surface, (100, 100, 100), self.rect)
            if pygame.mouse.get_pressed()[0] == 1 and self.clicked == False:
                self.cur_ind = (self.cur_ind + 1) % len(self.texts)
                self.clicked = True
        if pygame.mouse.get_pressed()[0] == 0:
            self.clicked = False
        surface.blit(self.text, self.rect.topleft)
        #draw button on screen

