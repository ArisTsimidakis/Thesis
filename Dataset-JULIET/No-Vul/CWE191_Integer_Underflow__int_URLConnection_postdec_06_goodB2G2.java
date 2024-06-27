class VAR1{
    private void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3==5)
            {
                VAR2 = VAR4.VAR5; 
                
                {
                    URLConnection VAR6 = (new FUN2("VAR7:
                    BufferedReader VAR8 = null;
                    InputStreamReader VAR9 = null;
                    try
                    {
                        VAR9 = new InputStreamReader(VAR6.getInputStream(), "");
                        VAR8 = new BufferedReader(VAR9);
                        
                        
                        String VAR10 = VAR8.readLine();
                        if (VAR10 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR10.trim());
                            }
                            catch (NumberFormatException VAR11)
                            {
                                VAR12.VAR13.log(VAR14.VAR15, "", VAR11);
                            }
                        }
                    }
                    catch (IOException VAR16)
                    {
                        VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
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
                        catch (IOException VAR16)
                        {
                            VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
    
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (IOException VAR16)
                        {
                            VAR12.VAR13.log(VAR14.VAR15, "", VAR16);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if (VAR3==5)
            {
                
                if (VAR2 > VAR4.VAR5)
                {
                    VAR2--;
                    int VAR17 = (int)(VAR2);
                    VAR12.writeLine("" + VAR17);
                }
                else
                {
                    VAR12.writeLine("");
                }
            }
        }
};