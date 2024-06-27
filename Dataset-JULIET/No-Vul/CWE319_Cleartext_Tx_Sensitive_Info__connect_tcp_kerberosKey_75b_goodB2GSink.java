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
                    KerberosPrincipal VAR6 = new FUN3("");
                    
                    {
                        Cipher VAR7 = VAR8.FUN4("");
                        
                        SecretKeySpec VAR9 = new FUN5("".getBytes(""), "");
                        VAR7.FUN6(VAR8.VAR10, VAR9);
                        VAR5 = new String(VAR7.FUN7(VAR5.getBytes("")), "");
                    }
                    KerberosKey VAR11 = new FUN8(VAR6, VAR5.FUN9(), null);
                    VAR12.writeLine(VAR11.FUN10());
                }
    
            }
            catch (IOException VAR13)
            {
                VAR12.VAR14.log(VAR15.VAR16, "", VAR13);
            }
            catch (ClassNotFoundException VAR17)
            {
                VAR12.VAR14.log(VAR15.VAR16, "", VAR17);
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
                catch (IOException VAR13)
                {
                    VAR12.VAR14.log(VAR15.VAR16, "", VAR13);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR13)
                {
                    VAR12.VAR14.log(VAR15.VAR16, "", VAR13);
                }
            }
        }
};