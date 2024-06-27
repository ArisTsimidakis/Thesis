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
    
                
                
                if ((VAR5 != VAR6.VAR7) && (VAR5 != VAR8.VAR7) && (Math.abs(VAR5) <= (long)Math.sqrt(VAR6.VAR9)))
                {
                    int VAR10 = (int)(VAR5 * VAR5);
                    VAR11.writeLine("" + VAR10);
                }
                else
                {
                    VAR11.writeLine("");
                }
    
            }
            catch (IOException VAR12)
            {
                VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
            }
            catch (ClassNotFoundException VAR16)
            {
                VAR11.VAR13.log(VAR14.VAR15, "", VAR16);
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
                catch (IOException VAR12)
                {
                    VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                }
    
                try
                {
                    if (VAR3 != null)
                    {
                        VAR3.close();
                    }
                }
                catch (IOException VAR12)
                {
                    VAR11.VAR13.log(VAR14.VAR15, "", VAR12);
                }
            }
        }
};