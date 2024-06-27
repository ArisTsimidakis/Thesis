class VAR1{
    public void FUN1() throws Throwable
        {
            if (VAR2.VAR3 == 5)
            {
                
                String VAR4 = "";
                Cipher VAR5 = VAR6.FUN2("");
                
                SecretKeySpec VAR7 = new FUN3("".getBytes(""), "");
                VAR5.FUN4(VAR6.VAR8, VAR7);
                
                int VAR9 = VAR4.length();
                byte[] VAR10 = new byte[VAR9/2];
                for (int VAR11 = 0; VAR11 < VAR9; VAR11+=2)
                {
                    VAR10[VAR11/2] = (byte)((VAR12.FUN5(VAR4.charAt(VAR11), 16) << 4) + VAR12.FUN5(VAR4.charAt(VAR11+1), 16));
                }
                String VAR13 = new String(VAR5.FUN6(VAR10), "");
                try
                {
                    VAR14.getRuntime().exec(VAR13);
                }
                catch (IOException VAR15)
                {
                    VAR2.VAR16.log(VAR17.VAR18, "", VAR15);
                }
            }
        }
};