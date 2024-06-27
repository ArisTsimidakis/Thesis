class VAR1{
    public void FUN1() throws Throwable
        {
            if (true)
            {
                FileOutputStream VAR2 = null;
                try
                {
                    String VAR3 = "";
                    File VAR4 = new File(VAR3);
                    long lastModified = VAR4.lastModified();
                    VAR2 = new FileOutputStream(VAR4);
                    VAR2.write("".getBytes(""));
                    
                    
                    VAR4.FUN2(lastModified - 10000L);
                }
                catch (IOException VAR5)
                {
                    VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                }
                finally
                {
                    try
                    {
                        if (VAR2 != null)
                        {
                            VAR2.close();
                        }
                    }
                    catch (IOException VAR5)
                    {
                        VAR6.VAR7.log(VAR8.VAR9, "", VAR5);
                    }
                }
            }
        }
};