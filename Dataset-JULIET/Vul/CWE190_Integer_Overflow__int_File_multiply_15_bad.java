class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            switch (6)
            {
            case 6:
                VAR2 = VAR3.VAR4; 
                {
                    File VAR5 = new File("");
                    FileInputStream VAR6 = null;
                    InputStreamReader VAR7 = null;
                    BufferedReader VAR8 = null;
                    try
                    {
                        
                        VAR6 = new FileInputStream(VAR5);
                        VAR7 = new InputStreamReader(VAR6, "");
                        VAR8 = new BufferedReader(VAR7);
                        
                        
                        String VAR9 = VAR8.readLine();
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR3.parseInt(VAR9.trim());
                            }
                            catch(NumberFormatException VAR10)
                            {
                                VAR11.VAR12.log(VAR13.VAR14, "", VAR10);
                            }
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
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
                if(VAR2 > 0) 
                {
                    
                    int VAR16 = (int)(VAR2 * 2);
                    VAR11.writeLine("" + VAR16);
                }
                break;
            default:
                
                VAR11.writeLine("");
                break;
            }
        }
};