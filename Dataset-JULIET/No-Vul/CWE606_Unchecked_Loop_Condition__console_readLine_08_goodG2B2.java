class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
            if (FUN2())
            {
                
                VAR2 = "";
            }
            else
            {
                
                VAR2 = null;
            }
    
            if (FUN2())
            {
                int VAR3;
                try
                {
                    VAR3 = VAR4.parseInt(VAR2);
                }
                catch (NumberFormatException VAR5)
                {
                    VAR6.writeLine("");
                    VAR3 = 1;
                }
                for (int VAR7=0; VAR7 < VAR3; VAR7++)
                {
                    
                    VAR6.writeLine("");
                }
            }
        }
};