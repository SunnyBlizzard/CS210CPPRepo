9/11 5:00 pm:
    Assignment started and git branch established. 
    isEmpty() and isFull() written and tested on empty stack.
    I decided to declare topindex = 1; in the Stack.h file so that we have a set value after construction. isEmpty and isFull just compares this value. 
9/11 5:30 pm:
    push(), pop(), seek() and size() implemented and works with provided test cases in main.
    I wasn't sure what to return for seek() on an empty stack but -1 seemed the most appropriate. The print statements I picked convey the error clearly. I hope the user knows that they did wrong even without having to check which method that print came form.  
9/14: 4:30pm:
    Read me questions and clean up.
    I realized my solution of declaring topIndex in Stack.h wouild break the cpp/header separation, so I moved it to the constructor instead. I also did the readme questions and created the constructor that I never wrote before. 
    I also wrote a more robust test case in main, although it does not actually test many more edge cases than the original test cases. 