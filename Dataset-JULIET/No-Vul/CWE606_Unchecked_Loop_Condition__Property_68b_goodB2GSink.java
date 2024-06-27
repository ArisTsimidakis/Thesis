class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2 = VAR3.VAR2;
    
            int VAR4;
            try
            {
                VAR4 = VAR5.parseInt(VAR2);
            }
            catch (NumberFormatException VAR6)
            {
                VAR7.writeLine("");
                VAR4 = 1;
            }
    
            
            if (VAR4 >= 0 && VAR4 <= 5)
            {
                for (int VAR8=0; VAR8 < VAR4; VAR8++)
                {
                    VAR7.writeLine("");
                }
            }
    
        }
};