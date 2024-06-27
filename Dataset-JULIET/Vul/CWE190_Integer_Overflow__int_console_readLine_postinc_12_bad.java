class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if(VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                {
                    InputStreamReader VAR6 = null;
                    BufferedReader VAR7 = null;
                    
                    try
                    {
                        VAR6 = new InputStreamReader(System.in, "");
                        VAR7 = new BufferedReader(VAR6);
                        
                        String VAR8 = VAR7.readLine();
                        if (VAR8 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR8.trim());
                            }
                            catch(NumberFormatException VAR9)
                            {
                                VAR3.VAR10.log(VAR11.VAR12, "", VAR9);
                            }
                        }
                    }
                    catch (IOException VAR13)
                    {
                        VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (IOException VAR13)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR13)
                        {
                            VAR3.VAR10.log(VAR11.VAR12, "", VAR13);
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
                
                VAR2++;
                int VAR14 = (int)(VAR2);
                VAR3.writeLine("" + VAR14);
            }
            else
            {
    
                
                if (VAR2 < VAR4.VAR15)
                {
                    VAR2++;
                    int VAR14 = (int)(VAR2);
                    VAR3.writeLine("" + VAR14);
                }
                else
                {
                    VAR3.writeLine("");
                }
    
            }
        }
};