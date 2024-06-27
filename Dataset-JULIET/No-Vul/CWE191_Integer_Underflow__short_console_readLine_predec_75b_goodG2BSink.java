class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                short VAR5 = (VAR6)VAR4.readObject();
    
                
                short VAR7 = (VAR8)(--VAR5);
    
                VAR9.writeLine("" + VAR7);
    
            }
            catch (IOException VAR10)
            {
                VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
            }
            catch (ClassNotFoundException VAR14)
            {
                VAR9.VAR11.log(VAR12.VAR13, "", VAR14);
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
                catch (IOException VAR10)
                {
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR10)
                {
                    VAR9.VAR11.log(VAR12.VAR13, "", VAR10);
                }
            }
        }
};