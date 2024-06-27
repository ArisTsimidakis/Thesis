class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3.FUN2())
            {
                VAR2 = VAR4.VAR5; 
                
                {
                    Socket VAR6 = null;
                    BufferedReader VAR7 = null;
                    InputStreamReader VAR8 = null;
                    try
                    {
                        
                        VAR6 = new Socket("", 39544);
                        
                        VAR8 = new InputStreamReader(VAR6.getInputStream(), "");
                        VAR7 = new BufferedReader(VAR8);
                        
                        String VAR9 = VAR7.readLine();
                        if (VAR9 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR9.trim());
                            }
                            catch(NumberFormatException VAR10)
                            {
                                VAR3.VAR11.log(VAR12.VAR13, "", VAR10);
                            }
                        }
                    }
                    catch (IOException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
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
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
    
                        
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (IOException VAR14)
                        {
                            VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                        }
                    }
                }
            }
            else
            {
                
                VAR2 = 0;
            }
    
            if(VAR3.FUN2())
            {
                File VAR15 = new File("");
                FileOutputStream VAR16 = new FileOutputStream(VAR15);
                OutputStreamWriter VAR17 = new FUN3(VAR16, "");
                BufferedWriter VAR18 = new BufferedWriter(VAR17);
                int VAR19;
                
                for (VAR19 = 0; VAR19 < VAR2; VAR19++)
                {
                    try
                    {
                        VAR18.write("");
                    }
                    catch (IOException VAR14)
                    {
                        VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                    }
                }
                
                try
                {
                    if (VAR18 != null)
                    {
                        VAR18.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                }
                try
                {
                    if (VAR17 != null)
                    {
                        VAR17.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                }
                try
                {
                    if (VAR16 != null)
                    {
                        VAR16.close();
                    }
                }
                catch (IOException VAR14)
                {
                    VAR3.VAR11.log(VAR12.VAR13, "", VAR14);
                }
            }
        }
};