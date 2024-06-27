class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.VAR4)
            {
                VAR2 = VAR5.VAR6; 
                
                {
                    Socket VAR7 = null;
                    BufferedReader VAR8 = null;
                    InputStreamReader VAR9 = null;
                    try
                    {
                        
                        VAR7 = new Socket("", 39544);
                        
                        VAR9 = new InputStreamReader(VAR7.getInputStream(), "");
                        VAR8 = new BufferedReader(VAR9);
                        
                        String VAR10 = VAR8.readLine();
                        if (VAR10 != null) 
                        {
                            try
                            {
                                VAR2 = VAR5.parseInt(VAR10.trim());
                            }
                            catch(NumberFormatException VAR11)
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
    
                        
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
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
                
                VAR2 = 0;
            }
    
            if (VAR3.VAR4)
            {
                File VAR16 = new File("");
                FileOutputStream VAR17 = new FileOutputStream(VAR16);
                OutputStreamWriter VAR18 = new FUN2(VAR17, "");
                BufferedWriter VAR19 = new BufferedWriter(VAR18);
                int VAR20;
                
                for (VAR20 = 0; VAR20 < VAR2; VAR20++)
                {
                    try
                    {
                        VAR19.write("");
                    }
                    catch (IOException VAR15)
                    {
                        VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                }
                
                try
                {
                    if (VAR19 != null)
                    {
                        VAR19.close();
                    }
                }
                catch (IOException VAR15)
                {
                    VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                }
                try
                {
                    if (VAR18 != null)
                    {
                        VAR18.close();
                    }
                }
                catch (IOException VAR15)
                {
                    VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                }
                try
                {
                    if (VAR17 != null)
                    {
                        VAR17.close();
                    }
                }
                catch (IOException VAR15)
                {
                    VAR3.VAR12.log(VAR13.VAR14, "", VAR15);
                }
            }
        }
};