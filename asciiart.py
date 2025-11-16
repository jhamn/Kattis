class Switch:
  def A(self):
    return r"""Problem A is about Ascii Art
   _     __   __  _   _
  / \   / /  / / | | | |
 / _ \  \ \ | |  | | | |
/_/ \_\ /_/  \_\ |_| |_|"""

  def B(self):
    return r"""Problem B is about Fortnite
###############
###############
####       /###
####   ########
####       ####
####   ########
####   ########
####   ########
####_~<########
###############"""

  def C(self):
    return (r"""Problem C is about The Legend of Zelda
     /\
    /  \
   /____\
  /\    /\
 /  \  /  \
/____\/____\ """).rstrip()

  def default(self):
    return "I am not sure how to answer that."

  def switch(self, value):
    return getattr(self, f"{value}", self.default)()

words = input().split()
try:
    idx = words.index("problem") + 1
    letter = words[idx]
except (ValueError, IndexError):
    letter = ""

obj = Switch()
print(obj.switch(letter))
