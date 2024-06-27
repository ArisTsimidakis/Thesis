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
    
                
                if("".equals(VAR5))
                {
                    VAR6.writeLine("");
                }
    
            }
            catch (IOException VAR7)
            {
                VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
            }
            catch (ClassNotFoundException VAR11)
            {
                VAR6.VAR8.log(VAR9.VAR10, "", VAR11);
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
                catch (IOException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR7)
                {
                    VAR6.VAR8.log(VAR9.VAR10, "", VAR7);
                }
            }
        }
};