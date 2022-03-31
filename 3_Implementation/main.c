int main()

{
    char you, comp;
    srandom(time(0));
    int number = random()%100 + 1;

    if(number<33)
    {
        comp = 's';
    }
    
    else if(number>33 && number<66)
    {
        comp='w';
    }
    
    else
    {
        comp='g';
    }
    
    printf("**STONE PAPER SCISSOR**\n");
    
    printf("\nEnter   1. 'S' for Stone :");
    printf("\nEnter   2. 'P' for Paper :\n");
    printf("Enter   3. 'Si' for Scissor :\n");
    
    printf("\nEnter Your Choice :");
    
    printf("\n");
    scanf("%c", &you);
    
    int result = StonePaperScissor(you, comp);
    
    if(result ==0)
    {
        printf("Game draw!");
        printf("\n");
    }
    
    else if(result==1)
    {
        printf("You win!");
        printf("\n");
    }
    
    else
    {
        printf("You Lose!");
        printf("\n");
    }
    
    printf("You chose %c and computer chose %c. ", you, comp);
    
    return 0;
    
}