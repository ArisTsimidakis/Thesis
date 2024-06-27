class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (FUN2())
            {
                
                VAR2 = 100;
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (FUN2())
            {
                
                int VAR3[] = { 0, 1, 2, 3, 4 };
                
                VAR3[VAR2] = 42;
                
            }
        }
};