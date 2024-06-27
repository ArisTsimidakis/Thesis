class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = VAR3.VAR4; 
                
                {
                    Properties VAR5 = new Properties();
                    FileInputStream VAR6 = null;
                    try
                    {
                        VAR6 = new FileInputStream("");
                        VAR5.FUN2(VAR6);
                        
                        String VAR7 = VAR5.FUN3("");
                        if (VAR7 != null) 
                        {
                            try
                            {
                                VAR2 = VAR3.parseInt(VAR7.trim());
                            }
                            catch(NumberFormatException VAR8)
                            {
                                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                            }
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR13)
                        {
                            VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
                    }
                }
                break;
            default:
                
                VAR2 = 0;
                break;
            }
    
            switch (7)
            {
            case 7:
                int VAR14[] = null;
                
                if (VAR2 >= 0)
                {
                    VAR14 = new int[VAR2];
                }
                else
                {
                    VAR9.writeLine("");
                }
                
                VAR14[0] = 5;
                VAR9.writeLine(VAR14[0]);
                break;
            default:
                
                VAR9.writeLine("");
                break;
            }
        }
};