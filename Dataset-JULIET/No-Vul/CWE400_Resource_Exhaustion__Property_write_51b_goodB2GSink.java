class VAR1{
    public void FUN1(int VAR2 ) throws Throwable
        {
    
            
            if (VAR2 > 0 && VAR2 <= 20)
            {
                File VAR3 = new File("");
                FileOutputStream VAR4 = new FileOutputStream(VAR3);
                OutputStreamWriter VAR5 = new FUN2(VAR4, "");
                BufferedWriter VAR6 = new BufferedWriter(VAR5);
                int VAR7;
                for (VAR7 = 0; VAR7 < VAR2; VAR7++)
                {
                    try
                    {
                        VAR6.write("");
                    }
                    catch (IOException VAR8)
                    {
                        VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                    }
                }
                
                try
                {
                    if (VAR6 != null)
                    {
                        VAR6.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
                try
                {
                    if (VAR5 != null)
                    {
                        VAR5.close();
                    }
                }
                catch (IOException VAR8)
                {
                    VAR9.VAR10.log(VAR11.VAR12, "", VAR8);
                }
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
            }
    
        }
};