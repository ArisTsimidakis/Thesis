class VAR1{
    private void FUN1(String VAR2 ) throws Throwable
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
    
            
            if (VAR3 >= 0 && VAR3 <= 5)
            {
                for (int VAR7=0; VAR7 < VAR3; VAR7++)
                {
                    VAR6.writeLine("");
                }
            }
    
        }
};