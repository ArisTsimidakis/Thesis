class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (5==5)
            {
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
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (5!=5)
            {
                
                VAR11.writeLine("");
            }
            else
            {
    
                
                if (VAR2 < VAR3.VAR16)
                {
                    VAR2++;
                    int VAR17 = (int)(VAR2);
                    VAR11.writeLine("" + VAR17);
                }
                else
                {
                    VAR11.writeLine("");
                }
    
            }
        }
};