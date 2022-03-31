int StonePaperScissor(char you, char comp)

{
  
    if(you == comp)
    {
        return 0;
    }
    
    if(you=='s' && comp=='g')
    {
        return -1;
    }
    
    else if(you=='g' && comp=='s')
    {
        return 1;
    }
    
    if(you=='s' && comp=='w')
    {
        return 1;
    }
    
    else if(you=='w' && comp=='s')
    {
        return -1;
    }
    
    if(you=='g' && comp=='w')
    {
        return -1;
    }
    
    else if(you=='w' && comp=='g')
    {
        return 1;
    }
    
}
