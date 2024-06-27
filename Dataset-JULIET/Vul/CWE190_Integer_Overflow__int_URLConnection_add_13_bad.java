class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4==5)
            {
                VAR2 = VAR5.VAR6; 
                
                {
                    URLConnection VAR7 = (new FUN2("VAR8:
                    BufferedReader VAR9 = null;
                    InputStreamReader VAR10 = null;
                    try
                    {
                        VAR10 = new InputStreamReader(VAR7.getInputStream(), "");
                        VAR9 = new BufferedReader(VAR10);
                        
                        
                        String VAR11 = VAR9.readLine();
                        if (VAR11 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.parseInt(VAR11.trim());
                            }
                            catch (NumberFormatException VAR12)
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
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4==5)
            {
                
                int VAR17 = (int)(VAR2 + 1);
                VAR3.writeLine("" + VAR17);
            }
        }
};