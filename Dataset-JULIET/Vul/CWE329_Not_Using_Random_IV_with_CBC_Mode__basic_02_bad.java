class VAR1{
    public void FUN1() throws Throwable
        {
            if (true)
            {
                byte[] VAR2 = "".getBytes("");
                byte[] VAR3 =
                {
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
                    0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00
                };
                KeyGenerator VAR4 = VAR5.FUN2("");
                VAR4.FUN3(128);
                SecretKey VAR6 = VAR4.FUN4();
                
                Cipher VAR7 = VAR8.FUN2("");
                IvParameterSpec VAR9 = new FUN5(VAR3);
                VAR7.FUN3(VAR8.VAR10, VAR6, VAR9);
                VAR11.writeLine(VAR11.FUN6(VAR7.FUN7(VAR2)));
            }
        }
};