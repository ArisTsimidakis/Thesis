class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            {
                int VAR3;
    
                
                VAR3 = (new FUN2()).nextInt();
    
                VAR2 = VAR3;
            }
            {
                int VAR3 = VAR2;
    
                
                int VAR4[] = { 0, 1, 2, 3, 4 };
    
                
                if (VAR3 >= 0 && VAR3 < VAR4.length)
                {
                    VAR5.writeLine(VAR4[VAR3]);
                }
                else
                {
                    VAR5.writeLine("");
                }
    
            }
        }
};