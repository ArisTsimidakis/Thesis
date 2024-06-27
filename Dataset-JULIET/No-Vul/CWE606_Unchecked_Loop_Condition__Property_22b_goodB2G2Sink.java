class VAR1{
    public void FUN1(String VAR2 ) throws Throwable
        {
            if (VAR3.VAR4)
            {
                int VAR5;
                try
                {
                    VAR5 = VAR6.parseInt(VAR2);
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
            else
            {
                
                VAR2 = null;
            }
        }
};