class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                
                {
                    URLConnection VAR6 = (new FUN3("VAR7:
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
                                VAR3.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
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
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR9 != null)
                            {
                                VAR9.close();
                            }
                        }
                        catch (IOException VAR15)
                        {
                            VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
                    }
                }
            }
            else
            {
    
                
                VAR2 = 2;
    
            }
    
            if(VAR3.FUN2())
            {
                
                VAR3.writeLine("" + VAR2 + "" + (100 % VAR2) + "");
            }
            else
            {
    
                
                if (VAR2 != 0)
                {
                    VAR3.writeLine("" + VAR2 + "" + (100 % VAR2) + "");
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};