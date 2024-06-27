class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = VAR5.VAR6; 
                {
                    ServerSocket VAR7 = null;
                    Socket VAR8 = null;
                    BufferedReader VAR9 = null;
                    InputStreamReader VAR10 = null;
                    
                    try
                    {
                        VAR7 = new FUN2(39543);
                        VAR8 = VAR7.accept();
                        
                        VAR10 = new InputStreamReader(VAR8.getInputStream(), "");
                        VAR9 = new BufferedReader(VAR10);
                        
                        String VAR11 = VAR9.readLine();
                        if (VAR11 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.parseInt(VAR11.trim());
                            }
                            catch(NumberFormatException VAR12)
                            {
                                VAR3.VAR13.log(VAR14.VAR15, "", VAR12);
                            }
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                    }
                    finally
                    {
                        
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR10 != null)
                            {
                                VAR10.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
    
                        
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR3.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4!=5)
            {
                
                VAR3.writeLine("");
            }
            else
            {
    
                
                if (VAR2 < VAR5.VAR17)
                {
                    VAR2++;
                    int VAR18 = (int)(VAR2);
                    VAR3.writeLine("" + VAR18);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};