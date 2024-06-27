class VAR1{
    private void FUN1() throws Throwable
        {
            float VAR2;
            {
                float VAR3;
    
                VAR3 = 0.0f; 
    
                VAR2 = VAR3;
            }
            {
                float VAR3 = VAR2;
    
                
                if (Math.abs(VAR3) > 0.000001)
                {
                    int VAR4 = (int)(100.0 % VAR3);
                    VAR5.writeLine(VAR4);
                }
                else
                {
                    VAR5.writeLine("");
                }
    
            }
        }
};