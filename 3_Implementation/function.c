int RockPaperScissor(char you, char comp)

{
  
    if(you == comp)
    {
        return 0;
    }
    
    if(you=='r' && comp=='s')
    {
        return -1;
    }
    
    else if(you=='s' && comp=='r')
    {
        return 1;
    }
    
    if(you=='r' && comp=='p')
    {
        return 1;
    }
    
    else if(you=='p' && comp=='r')
    {
        return -1;
    }
    
    if(you=='s' && comp=='p')
    {
        return -1;
    }
    
    else if(you=='p' && comp=='s')
    {
        return 1;
    }
    
}
