class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (VAR3.FUN2())
            {
                
                VAR2 = null;
            }
            else
            {
    
                
                VAR2 = "";
    
            }
    
            if (VAR3.FUN3())
            {
                int VAR4;
                try
                {
                    VAR4 = VAR5.parseInt(VAR2);
                }
                catch (NumberFormatException VAR6)
                {
                    VAR3.writeLine("");
                    VAR4 = 1;
                }
                for (int VAR7=0; VAR7 < VAR4; VAR7++)
                {
                    
                    VAR3.writeLine("");
                }
            }
        }
};