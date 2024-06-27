class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                String VAR5 = (String)VAR4.readObject();
    
                if (VAR5 != null)
                {
                    String VAR6[] = VAR5.split("");
                    int VAR7 = 0;
                    Connection VAR8 = null;
                    Statement VAR9 = null;
                    try
                    {
                        VAR8 = VAR10.FUN3();
                        VAR9 = VAR8.createStatement();
                        for (int VAR11 = 0; VAR11 < VAR6.length; VAR11++)
                        {
                            
                            VAR9.FUN4("" + VAR6[VAR11] + "");
                        }
                        int VAR12[] = VAR9.FUN5();
                        for (int VAR11 = 0; VAR11 < VAR6.length; VAR11++)
                        {
                            if (VAR12[VAR11] > 0)
                            {
                                VAR7++;
                            }
                        }
                        VAR10.writeLine("" + VAR7 + "" + VAR6.length + "");
                    }
                    catch (SQLException VAR13)
                    {
                        VAR10.VAR14.log(VAR15.VAR16, "", VAR13);
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
                        catch (SQLException VAR13)
                        {
                            VAR10.VAR14.log(VAR15.VAR16, "", VAR13);
                        }
    
                        try
                        {
                            if (VAR8 != null)
                            {
                                VAR8.close();
                            }
                        }
                        catch (SQLException VAR13)
                        {
                            VAR10.VAR14.log(VAR15.VAR16, "", VAR13);
                        }
                    }
                }
    
            }
            catch (IOException VAR17)
            {
                VAR10.VAR14.log(VAR15.VAR16, "", VAR17);
            }
            catch (ClassNotFoundException VAR18)
            {
                VAR10.VAR14.log(VAR15.VAR16, "", VAR18);
            }
            finally
            {
                
                try
                {
                    if (VAR4 != null)
                    {
                        VAR4.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR10.VAR14.log(VAR15.VAR16, "", VAR17);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR17)
                {
                    VAR10.VAR14.log(VAR15.VAR16, "", VAR17);
                }
            }
        }
};