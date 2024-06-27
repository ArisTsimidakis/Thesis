class VAR1{
    public void FUN1(VAR2<String> VAR3 ) throws Throwable
        {
            String VAR4 = VAR3.remove(2);
    
            int VAR5;
            try
            {
                VAR5 = VAR6.parseInt(VAR4);
            }
            catch (NumberFormatException VAR7)
            {
                VAR8.writeLine("");
                VAR5 = 1;
            }
    
            
            if (VAR5 >= 0 && VAR5 <= 5)
            {
                for (int VAR9=0; VAR9 < VAR5; VAR9++)
                {
                    VAR8.writeLine("");
                }
            }
    
        }
};