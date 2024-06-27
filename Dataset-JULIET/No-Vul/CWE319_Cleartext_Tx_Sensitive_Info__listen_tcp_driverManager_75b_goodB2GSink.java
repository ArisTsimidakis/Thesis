class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                String VAR5 = (String)VAR4.readObject();
    
                if (VAR5 != null)
                {
                    
                    {
                        Cipher VAR6 = VAR7.FUN3("");
                        
                        SecretKeySpec VAR8 = new FUN4("".getBytes(""), "");
                        VAR6.FUN5(VAR7.VAR9, VAR8);
                        VAR5 = new String(VAR6.FUN6(VAR5.getBytes("")), "");
                    }
                    Connection VAR10 = null;
                    PreparedStatement VAR11 = null;
                    ResultSet VAR12 = null;
                    try
                    {
                        
                        VAR10 = VAR13.getConnection("", "", VAR5);
                        VAR11 = VAR10.FUN7("");
                        VAR12 = VAR11.executeQuery();
                    }
                    catch (SQLException VAR14)
                    {
                        VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                    }
                    finally
                    {
                        try
                        {
                            if (VAR12 != null)
                            {
                                VAR12.close();
                            }
                        }
                        catch (SQLException VAR14)
                        {
                            VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR11 != null)
                            {
                                VAR11.close();
                            }
                        }
                        catch (SQLException VAR14)
                        {
                            VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                        }
    
                        try
                        {
                            if (VAR10 != null)
                            {
                                VAR10.close();
                            }
                        }
                        catch (SQLException VAR14)
                        {
                            VAR15.VAR16.log(VAR17.VAR18, "", VAR14);
                        }
                    }
                }
    
            }
            catch (IOException VAR19)
            {
                VAR15.VAR16.log(VAR17.VAR18, "", VAR19);
            }
            catch (ClassNotFoundException VAR20)
            {
                VAR15.VAR16.log(VAR17.VAR18, "", VAR20);
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
                catch (IOException VAR19)
                {
                    VAR15.VAR16.log(VAR17.VAR18, "", VAR19);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR19)
                {
                    VAR15.VAR16.log(VAR17.VAR18, "", VAR19);
                }
            }
        }
};