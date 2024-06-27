class VAR1{
    public void FUN1(byte[] VAR2 ) throws Throwable
        {
            
            ByteArrayInputStream VAR3 = null;
            ObjectInputStream VAR4 = null;
    
            try {
                VAR3 = new FUN2(VAR2);
                VAR4 = new ObjectInputStream(VAR3);
                int VAR5 = (VAR6)VAR4.readObject();
    
                
                int VAR7[] = { 0, 1, 2, 3, 4 };
    
                
                VAR7[VAR5] = 42;
    
                
    
            }
            catch (IOException VAR8)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
            }
            catch (ClassNotFoundException VAR13)
            {
                VAR9.VAR10.log(VAR11.VAR12, "", VAR13);
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
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
            }
        }
};