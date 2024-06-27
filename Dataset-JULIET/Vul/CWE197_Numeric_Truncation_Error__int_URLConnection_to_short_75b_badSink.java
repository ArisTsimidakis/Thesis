class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try
            {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                int VAR5 = (VAR6)VAR4.readObject();
    
                {
                    
                    VAR7.writeLine((VAR8)VAR5);
                }
    
            }
            catch (IOException VAR9)
            {
                VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
            }
            catch (ClassNotFoundException VAR13)
            {
                VAR7.VAR10.log(VAR11.VAR12, "", VAR13);
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
                catch (IOException VAR9)
                {
                    VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR9)
                {
                    VAR7.VAR10.log(VAR11.VAR12, "", VAR9);
                }
            }
        }
};