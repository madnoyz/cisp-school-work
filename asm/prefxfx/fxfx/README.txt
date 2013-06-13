General approach (for all questions):
- There are 6 questions, each in its own folder: q1, q2, ... q6
- Each question has exactly one subroutine written in C to be translated
  into assembly language.
- You should not need to change "Makefile" and "MakeCIMP".
- You should not need to change "main.c"
- The beginning of each "main.c" describes what the program does and
  other question specific instructions.
- The subroutine to be translated:
  - is surrounded by "#ifdef CIMP" and "#endif" in "main.c"
  - has an assembly language source file of the name already existing with 
    an extension of ".S".
- If the program has any "struct" definitions
  - the C version of the struct definitions are in "struct.h".
  - The program to generate the include file for structures is "structIncGen".
  - You need to edit structIncGen.c to make sure it generates the labels
    correctly as the include file for the assembly version.
  - The Makefile is already written to automatically generate "struct.inc"
    should it be #included by any assembly source file.
  - If your file #includes "struct.inc", the Makefile makes sure it is 
    reassembled if "struct.inc" is updated.
  - I should be able to change the struct definition (adding new members and/or
    moving existing members around) and a simple "make" should update "main" 
    so that it continues to work correctly.
- Use "make" to create "main", which is an executable that uses your
  assembly language implementation of a subroutine.
- Use "make mainC" to create "mainC", which uses the C implementation of
  the subroutine in question. Use "mainC" to help you identify the proper
  behavior of the program.
- Use "make clean" to remove all files that are generated.
- Use "make tar" to create a top level archive file "fxAnswer.tar.gz" in the
  home folder. Note: "make tar" overwrites the current archive file with
  an updated version with the answers of ALL the questions!
- When you are done, submit "fxAnswer.tar.gz" in your home folder. This file
  is updated with the latest answers of *all* questions when you use "make tar"
  in any question folder.

Rules to follow:
- Open book, open notes and open web, except:
  - No communication with another person regarding the questions during
    the exam. This includes talking to a future you that will have seen
    the solution after the exam.
- Look only at your own screen and not the screen of someone else!
- Your submission must be original, that means:
  - You originate the answer
  - You worked on the answer manually
- Your assembly code must reflect the C code, except when explicitly
  allowed to deviate from this rule. The following deviations are allowed
  for all questions:
  - Return in the middle of a subroutine. I think this is bad practice, but
    you are allowed to do it, nonetheless!
  - If a structure is returned, you can modify the area reserved for the
    return value directly.
  - Conditions of loops and conditional statements: you can simplify the
    handling of conditions.

Point distribution and scoring:
- Number of points considered as 100%: 40 points
- Number of points possible: 60 points (50% extra credit!!)
- Not all questions are of the same difficulty level, hence the uneven
  distribution of points:
  - q1 2 pts (recursion, control structure)
  - q2 4 pts (pointers, structure)
  - q3 18 pts (struct, pointers, control structure)
  - q4 8 pts (array, pointer, control structure)
  - q5 8 pts (integer promotion)
  - q6 20 pts (array, struct, pointers, control structure)
- Scoring:
  - For each question, I will have several test cases
  - # test cases passed determines the point value for each question
  - Non-working code does not get any points!
