class VAR1{
    private void FUN1() throws Throwable
        {
            String VAR2;
    
            
            VAR2 = "";
    
            for (int VAR3 = 0; VAR3 < 1; VAR3++)
            {
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
                for (int VAR8=0; VAR8 < VAR4; VAR8++)
                {
                    
                    VAR7.writeLine("");
                }
            }
        }
};