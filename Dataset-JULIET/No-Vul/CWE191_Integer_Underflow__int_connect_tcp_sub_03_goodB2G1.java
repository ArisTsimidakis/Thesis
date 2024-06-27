class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (5==5)
            {
                VAR2 = VAR3.VAR4; 
                
                {
                    Socket VAR5 = null;
                    BufferedReader VAR6 = null;
                    InputStreamReader VAR7 = null;
                    try
                    {
                        
                        VAR5 = new Socket("", 39544);
                        
                        VAR7 = new InputStreamReader(VAR5.getInputStream(), "");
                        VAR6 = new BufferedReader(VAR7);
                        
                        String VAR8 = VAR6.readLine();
                        if (VAR8 != null) 
                        {
                            try
                            {
                                VAR2 = VAR3.parseInt(VAR8.trim());
                            }
                            catch(NumberFormatException VAR9)
                            {
                                VAR10.VAR11.log(VAR12.VAR13, "", VAR9);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
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
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        
                        try
                        {
                            if (VAR5 != null)
                            {
                                VAR5.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR10.VAR11.log(VAR12.VAR13, "", VAR14);
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
                
                VAR10.writeLine("");
            }
            else
            {
    
                
                if (VAR2 > VAR3.VAR4)
                {
                    int VAR15 = (int)(VAR2 - 1);
                    VAR10.writeLine("" + VAR15);
                }
                else
                {
                    VAR10.writeLine("");
                }
    
            }
        }
};