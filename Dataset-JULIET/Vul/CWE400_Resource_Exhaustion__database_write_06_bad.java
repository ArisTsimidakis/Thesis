class VAR1{
    public void FUN1() throws Throwable
        {
            int VAR2;
            if (VAR3==5)
            {
                VAR2 = VAR4.VAR5; 
                
                {
                    Connection VAR6 = null;
                    PreparedStatement VAR7 = null;
                    ResultSet VAR8 = null;
                    try
                    {
                        
                        VAR6 = VAR9.FUN2();
                        
                        VAR7 = VAR6.FUN3("");
                        VAR8 = VAR7.executeQuery();
                        
                        String VAR10 = VAR8.FUN4(1);
                        if (VAR10 != null) 
                        {
                            try
                            {
                                VAR2 = VAR4.parseInt(VAR10.trim());
                            }
                            catch (NumberFormatException VAR11)
                            {
                                VAR9.VAR12.log(VAR13.VAR14, "", VAR11);
                            }
                        }
                    }
                    catch (SQLException VAR15)
                    {
                        VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
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
                        catch (SQLException VAR15)
                        {
                            VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR7 != null)
                            {
                                VAR7.close();
                            }
                        }
                        catch (SQLException VAR15)
                        {
                            VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
                        }
    
                        try
                        {
                            if (VAR6 != null)
                            {
                                VAR6.close();
                            }
                        }
                        catch (SQLException VAR15)
                        {
                            VAR9.VAR12.log(VAR13.VAR14, "", VAR15);
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
                File VAR16 = new File("");
                FileOutputStream VAR17 = new FileOutputStream(VAR16);
                OutputStreamWriter VAR18 = new FUN5(VAR17, "");
                BufferedWriter VAR19 = new BufferedWriter(VAR18);
                int VAR20;
                
                for (VAR20 = 0; VAR20 < VAR2; VAR20++)
                {
                    try
                    {
                        VAR19.write("");
                    }
                    catch (IOException VAR21)
                    {
                        VAR9.VAR12.log(VAR13.VAR14, "", VAR21);
                    }
                }
                
                try
                {
                    if (VAR19 != null)
                    {
                        VAR19.close();
                    }
                }
                catch (IOException VAR21)
                {
                    VAR9.VAR12.log(VAR13.VAR14, "", VAR21);
                }
                try
                {
                    if (VAR18 != null)
                    {
                        VAR18.close();
                    }
                }
                catch (IOException VAR21)
                {
                    VAR9.VAR12.log(VAR13.VAR14, "", VAR21);
                }
                try
                {
                    if (VAR17 != null)
                    {
                        VAR17.close();
                    }
                }
                catch (IOException VAR21)
                {
                    VAR9.VAR12.log(VAR13.VAR14, "", VAR21);
                }
            }
        }
};