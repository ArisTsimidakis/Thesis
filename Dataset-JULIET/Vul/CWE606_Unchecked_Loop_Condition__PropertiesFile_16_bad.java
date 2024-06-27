class VAR1{
    public void FUN1() throws Throwable
        {
            String VAR2;
    
            while (true)
            {
                VAR2 = ""; 
                
                {
                    Properties VAR3 = new Properties();
                    FileInputStream VAR4 = null;
                    try
                    {
                        VAR4 = new FileInputStream("");
                        VAR3.FUN2(VAR4);
                        
                        VAR2 = VAR3.FUN3("");
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR4 != null)
                            {
                                VAR4.close();
                            }
                        }
                        catch (IOException VAR5)
                        {
                            VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                        }
                    }
                }
                break;
            }
    
            while (true)
            {
                int VAR10;
                try
                {
                    VAR10 = VAR11.parseInt(VAR2);
                }
                catch (NumberFormatException VAR12)
                {
                    VAR6.writeLine("");
                    VAR10 = 1;
                }
                for (int VAR13=0; VAR13 < VAR10; VAR13++)
                {
                    
                    VAR6.writeLine("");
                }
                break;
            }
        }
};