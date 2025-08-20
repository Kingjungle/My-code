#libraries 

from tkinter import*
import random
from PIL import ImageTk, Image

#Window set up
root = Tk()
root.title('quiz game')

img = PhotoImage(file= 'icons8-question-mark-64.png') # window icon
root.tk.call('wm', 'iconphoto', root._w, img)

#Question index  

question = ["What is programming?\n\nA:Making a computer do stuff\nB:The act of making arrangments according to a plan or schedule\nC:The action or process of scheduling something.\nD:The process or activity of writing computer programs",
            "Who created python?\n\nA:Guido van Rossum\nB:Mark Zuckerberg\nC:James Gosling\nD:Ryan Gosling",
            "When was pythone first released?\n\nA:20 February 1991\nB:6 June 2024\nC:200 AD\nD:February 17 1981", 
            "What type of programing language is python?\n\nA:Imperative\nB:Object-oriented\nC:logical\nD:Functional",
            "What level language is python?\n\nA:A high-level language\nB:A low-level language\nC:A middle-Level language\nD:A machine language",
            "What is python used for mainly?\n\nA:Network programming\nB:Developing browsers\nC:In-game programming\nD:Developing websites and software and data analysis"]

#Imported images 

picture1 = Image.open("blue thumbs up.png").resize((120,120))
picture1 = ImageTk.PhotoImage(picture1)

picture2 = Image.open("complete shock.jpg").resize((180,180))
picture2 = ImageTk.PhotoImage(picture2)

picture3 = Image.open("thumbs up without glasses.jpg").resize((120,120))
picture3 = ImageTk.PhotoImage(picture3)

picture4 = Image.open("wow emogy.jpg").resize((120,120))
picture4 = ImageTk.PhotoImage(picture4)

picture5 = Image.open("thumbs down.jpg").resize((120,120))
picture5 = ImageTk.PhotoImage(picture5)

picture6 = Image.open("thumbs up with glasses.jpg").resize((120,120))
picture6 = ImageTk.PhotoImage(picture6)

picture7 = Image.open("thumbs up with legs.png").resize((120,120))
picture7 = ImageTk.PhotoImage(picture7)

picture8 = Image.open("happy asian guy.jpg").resize((180,180))
picture8 = ImageTk.PhotoImage(picture8)

picture9 = Image.open("very good emoji.png").resize((120,120))
picture9 = ImageTk.PhotoImage(picture9)

picture10 = Image.open("wrong cool.png").resize((120,120))
picture10 = ImageTk.PhotoImage(picture10)

picture11 = Image.open("guido.jpeg.jpg").resize((120,120))
picture11 = ImageTk.PhotoImage(picture11)

picture12 = Image.open("zidane.jpg").resize((180,180))
picture12 = ImageTk.PhotoImage(picture12)

picture13 = Image.open("wrong cross.png").resize((120,120))
picture13 = ImageTk.PhotoImage(picture13)

picture14 = Image.open("wrong.png").resize((120,120))
picture14 = ImageTk.PhotoImage(picture14)

picture15 = Image.open("pep.jpg").resize((180,180))
picture15 = ImageTk.PhotoImage(picture15)

picture16 = Image.open("wrong black.webp").resize((120,120))
picture16 = ImageTk.PhotoImage(picture16)

picture17 = Image.open("keep going.jpg").resize((180,180))
picture17 = ImageTk.PhotoImage(picture17)

#Colours

colour1 = '#020f12'
colour2 = '#05d7ff'
colour3 = '#65e7ff'
colour4 = 'BLACK'

#Score varuable 

new_score = 0
   
#Definitions 

def next():  # New question definition 
           
    def calculate():  # Answer checker 

        score = 0
        answer_given = answer_entry.get()

        answer_frame = Frame(root, width= 580, height= 250,  bg= colour1)
        answer_frame.grid(row=0 , column=0)
    

        if chosen_question == "What is programming?\n\nA:Making a computer do stuff\nB:The act of making arrangments according to a plan or schedule\nC:The action or process of scheduling something.\nD:The process or activity of writing computer programs":
        
            if answer_given == "d":
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 15', 
                                fg= 'white',
                                text= 'You got it right, good job!')
                answer_label.place(x=180, y=20)

                image1_label = Label(answer_frame,  
                                image= picture3)
                image1_label.place(x=225, y=60)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                proceed.place(x=230, y=220)
                score += 1

            
            elif answer_given != 'd':

                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 13', 
                                fg= 'white',
                                text= 'Unfortunatly you put in the wrong answer.\nPrograming is actually the process or activity of writing computer programs.\n These programs are writen by sofware engineers or otherwise know as\ndeveloper(devs).')
                answer_label.place(x=0, y=0)

                image1_label = Label(answer_frame,  
                                image= picture5)
                                
                image1_label.place(x=225, y=80)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)

        
        elif chosen_question == "Who created python?\n\nA:Guido van Rossum\nB:Mark Zuckerberg\nC:James Gosling\nD:Ryan Gosling":
                
            if answer_given == "a":
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 15', 
                                fg= 'white',
                                text= "WOWZA!!!, that's correct, good job!")
                answer_label.place(x=125, y=20)

                image1_label = Label(answer_frame,  
                                image= picture7)
                image1_label.place(x=225, y=60)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)        
                score += 1
            
            elif answer_given != 'a':
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 14', 
                                fg= 'white',
                                text= "You're out of luck, that's not the right answer.\nPython was actually created in the late 1980s by Guido van Rossum\n as successor to the ABC programming language")
                answer_label.place(x=0, y=0)

                image1_label = Label(answer_frame,  
                                image= picture11)
                image1_label.place(x=225, y=80)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)
            
        elif chosen_question == "When was pythone first released?\n\nA:20 February 1991\nB:6 June 2024\nC:200 AD\nD:February 17 1981":
                
            if answer_given == "a":
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 15', 
                                fg= 'white',
                                text= 'WOW you actually got this one right!!\nyou might be a python genius')
                answer_label.place(x=120, y=5)

                image1_label = Label(answer_frame,  
                                image= picture4)
                image1_label.place(x=225, y=60)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)
                score += 1
            
            elif answer_given != 'a':
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 14', 
                                fg= 'white',
                                text= "Sadly that is incorrect.\n Python was actaully first released in 1991 as Python 0.9.0")
                answer_label.place(x=20, y=0)

                image1_label = Label(answer_frame,  
                                image= picture13)
                image1_label.place(x=225, y=60)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)

        
        elif chosen_question == "What type of programing language is python?\n\nA:Imperative\nB:Object-oriented\nC:logical\nD:Functional":
            
            if answer_given == "b":
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 15', 
                                fg= 'white',
                                text= 'Ok python geek, we see you.')
                answer_label.place(x=160, y=20)

                image1_label = Label(answer_frame,  
                                image= picture6)
                image1_label.place(x=225, y=60)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)
                score += 1
            

            elif answer_given != 'a':

                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 13', 
                                fg= 'white',
                                text= " This was a tough one. Python in actual fact is a object oriented language\n and a computer programming model that organizes software\n designed around data, or objects, rather than functions and logic.")
                answer_label.place(x=20, y=0)

                image1_label = Label(answer_frame,  
                                image= picture14)
                image1_label.place(x=225, y=80)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)

            
        
        elif chosen_question == "What level language is python?\n\nA:A high-level language\nB:A low-level language\nC:A middle-Level language\nD:A machine language" :
            
            if answer_given == "a":
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 15', 
                                fg= 'white',
                                text= "I didn't even know the answer to this one and I set the questions!\nGood job.")
                answer_label.place(x=0, y=5)

                image1_label = Label(answer_frame,  
                                image= picture9)
                image1_label.place(x=225, y=60)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)
                score += 1
            
            elif answer_given != 'a':
                
                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 13', 
                                fg= 'white',
                                text= " Looks like you got this one wrong.\nPython is actually a high level language meaning it's a language\nthat is designed to make it easier for humans to understand and write.")
                answer_label.place(x=15, y=0)

                image1_label = Label(answer_frame,  
                                image= picture16)
                image1_label.place(x=225, y=80)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)
        
        elif chosen_question == "What is python used for mainly?\n\nA:Network programming\nB:Developing browsers\nC:In-game programming\nD:Developing websites and software and data analysis":
            
            if answer_given == "d":

                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 15', 
                                fg= 'white',
                                text= "Hey you got this one right.\n You might have what it takes to be a python developer.")
                answer_label.place(x=60, y=0)

                image1_label = Label(answer_frame,  
                                image= picture1)
                image1_label.place(x=225, y=60)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)
                score += 1
            
            elif answer_given != 'd':

                answer_label = Label(answer_frame,
                                bg= '#020f12', 
                                font = 'fixedesys 13', 
                                fg= 'white',
                                text= "You're answer was incorrect.\nPython is a computer programming language often used to build websites\n and software, automate tasks, and conduct data analysis.")
                answer_label.place(x=10, y=0)

                image1_label = Label(answer_frame,  
                                image= picture10)
                image1_label.place(x=225, y=80)

                proceed = Button(answer_frame,
                            text="Next", 
                            command = next, 
                            width=13, 
                            height=1, 
                            font= 'fixedsys', 
                            bg = colour2, 
                            fg =colour4, 
                            activebackground= colour3, 
                            activeforeground=colour4, 
                            highlightthickness= 2, 
                            highlightbackground=colour2, 
                            highlightcolor='WHITE')
                
                proceed.place(x=230, y=220)


        if score == 1: 
            global new_score
            new_score += 1 


    if len(question) != 0: # New question creator

        chosen_question = random.choice(question)
        question.remove(chosen_question)


        top_frame =  Frame(root, width= 580, height= 250, bg = colour1)
        top_frame.grid(row = 0, column = 0)


        top_entry = Label(top_frame, 
                          text = chosen_question, 
                          justify= 'left',
                          bg = colour1,
                          fg = 'WHITE',
                          font = 'fixedesys, 15')
        
        top_entry.place( x = 0, y = 0)
        
        answer_here_label = Label(top_frame, text = 'type your answer here', fg= 'WHITE', font ='fixedesys, 8', bg=colour1)
        answer_here_label.place( x=80, y= 200)
        

        answer_entry = Entry(top_frame, width=8, font= 'fixedesys, 10')
        answer_entry.place ( x=10 , y =200)

        calculate_answer = Button(top_frame, 
                                  text="next", 
                                  command = calculate,
                                  width=13, height=1, 
                                  font= 'fixedsys', 
                                  bg = colour2, 
                                  fg =colour4,
                                  activebackground= colour3, 
                                  activeforeground=colour4, 
                                  highlightthickness= 2, 
                                  highlightbackground=colour2, 
                                  highlightcolor='WHITE' )
        
        calculate_answer.place(x=400,y=192)

    elif len(question) == 0: # Results calulator

        out_off = new_score/6
        percentage_before_rounding= out_off * 100
        percentage = round(percentage_before_rounding )

        end_frame = Frame(root, width= 580, height= 250,  bg= colour1)
        end_frame.grid(row=0 , column=0)

        if percentage < 10:
            
            end_label = Label(end_frame,  
                            text= "Quiz done you got " + (str(percentage )) +"%" +"\nWow ok, you may need more practice.",
                            bg= '#020f12', 
                            font = 'fixedesys 15', 
                            fg= 'white')
            end_label.place(x=100, y=0)

            end_image = Label(end_frame,
                                 image= picture2)
            end_image.place(x=205, y=60)

        if percentage >= 10 and percentage < 50:
            
            end_label = Label(end_frame,  
                            text= "Quiz done you got " + (str(percentage )) +"%" +"\nWe might need to work on this a bit more.",
                            bg= '#020f12', 
                            font = 'fixedesys 15', 
                            fg= 'white')
            end_label.place(x=100, y=0)

            end_image = Label(end_frame,
                                image= picture17)
            end_image.place(x=205, y=60)


        if percentage >= 50 and percentage < 80:
            
            end_label = Label(end_frame,  
                            text= "Quiz done you got " + (str(percentage )) +"%" +"\n This is good but I'm sure you can do better.",
                            bg= '#020f12', 
                            font = 'fixedesys 15', 
                            fg= 'white')
            end_label.place(x=100, y=0)

            end_image = Label(end_frame,
                                 image= picture8)
            end_image.place(x=205, y=60)

            
        if percentage >= 80 and percentage < 90:
            
            end_label = Label(end_frame,  
                text= "Quiz done you got " + (str(percentage )) +"%" +"\n Wow, you might be a python genius.",
                bg= '#020f12', 
                font = 'fixedesys 15', 
                fg= 'white')
            end_label.place(x=100, y=0)

            end_image = Label(end_frame,
                                 image= picture15)
            end_image.place(x=205, y=60)
            
        if percentage >=90:
            
            end_label = Label(end_frame,  
                text= "Quiz done you got " + (str(percentage )) +"%" +"\n You are a ceritified python gigachad.",
                bg= '#020f12', 
                font = 'fixedesys 15', 
                fg= 'white')
            end_label.place(x=100, y=0)

            end_image = Label(end_frame,
                                 image= picture12)
            end_image.place(x=205, y=60)

#Start page 

start_frame = Frame(root, width= 580, height= 250,  bg= colour1)
start_frame.grid(row=0 , column=0)

start_text = Label(start_frame,  
                   text= 'Hello and welcome to my python quiz game.\nThis program was designed to help you learn\na little bit more about the programing language\n,‘python’, in a quick quizzical format, so try and get\nas many questions right as possible! I hope you\nenjoy',
                   bg= '#020f12', 
                   font = 'fixedesys 15', 
                   fg= 'white')

start_text.place(x=70, y=20)

start = Button(start_frame,
               text="Start", 
               command = next, 
               width=13, 
               height=1, 
               font= 'fixedsys', 
               bg = colour2, 
               fg =colour4, 
               activebackground= colour3, 
               activeforeground=colour4, 
               highlightthickness= 2, 
               highlightbackground=colour2, 
               highlightcolor='WHITE')

start.place(x=225,y=180)

#Loop

root.mainloop()
