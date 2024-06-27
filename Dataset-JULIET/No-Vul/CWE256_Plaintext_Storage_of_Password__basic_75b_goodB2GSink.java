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
    
                
                {
                    Cipher VAR6 = VAR7.FUN3("");
    
                    
                    SecretKeySpec VAR8 = new FUN4("".getBytes(""), "");
                    VAR6.FUN5(VAR7.VAR9, VAR8);
    
                    String VAR10 = new String(VAR6.FUN6(VAR5.getBytes("")), "");
                    VAR5 = VAR10;
                }
    
                Connection VAR11 = null;
                try
                {
                    VAR11 = VAR12.getConnection("", "", VAR5);
                }
                catch (SQLException VAR13)
                {
                    VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
                }
                finally
                {
                    try
                    {
                        if (VAR11 != null)
                        {
                            VAR11.close();
                        }
                    }
                    catch (SQLException VAR13)
                    {
                        VAR14.VAR15.log(VAR16.VAR17, "", VAR13);
                    }
                }
    
            }
            catch (IOException VAR18)
            {
                VAR14.VAR15.log(VAR16.VAR17, "", VAR18);
            }
            catch (ClassNotFoundException VAR19)
            {
                VAR14.VAR15.log(VAR16.VAR17, "", VAR19);
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
                catch (IOException VAR18)
                {
                    VAR14.VAR15.log(VAR16.VAR17, "", VAR18);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR18)
                {
                    VAR14.VAR15.log(VAR16.VAR17, "", VAR18);
                }
            }
        }
};