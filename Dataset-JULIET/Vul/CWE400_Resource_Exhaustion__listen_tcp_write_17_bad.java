class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
    
            
    
            VAR2 = VAR3.VAR4; 
    
            {
                ServerSocket VAR5 = null;
                Socket VAR6 = null;
                BufferedReader VAR7 = null;
                InputStreamReader VAR8 = null;
    
                
                try
                {
                    VAR5 = new FUN2(39543);
                    VAR6 = VAR5.accept();
    
                    
    
                    VAR8 = new InputStreamReader(VAR6.getInputStream(), "");
                    VAR7 = new BufferedReader(VAR8);
    
                    
                    String VAR9 = VAR7.readLine();
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
                        if (VAR6 != null)
                        {
                            VAR6.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
    
                    try
                    {
                        if (VAR5 != null)
                        {
                            VAR5.close();
                        }
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                }
            }
    
            for (int VAR16 = 0; VAR16 < 1; VAR16++)
            {
                File VAR17 = new File("");
                FileOutputStream VAR18 = new FileOutputStream(VAR17);
                OutputStreamWriter VAR19 = new FUN3(VAR18, "");
                BufferedWriter VAR20 = new BufferedWriter(VAR19);
                int VAR21;
                
                for (VAR21 = 0; VAR21 < VAR2; VAR21++)
                {
                    try
                    {
                        VAR20.write("");
                    }
                    catch (IOException VAR15)
                    {
                        VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                    }
                }
                
                try
                {
                    if (VAR20 != null)
                    {
                        VAR20.close();
                    }
                }
                catch (IOException VAR15)
                {
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
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
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
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
                    VAR11.VAR12.log(VAR13.VAR14, "", VAR15);
                }
            }
        }
};