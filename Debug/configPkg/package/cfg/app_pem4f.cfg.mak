# invoke SourceDir generated makefile for app.pem4f
app.pem4f: .libraries,app.pem4f
.libraries,app.pem4f: package/cfg/app_pem4f.xdl
	$(MAKE) -f /home/satish/workspace_v8/projectx_alpha/src/makefile.libs

clean::
	$(MAKE) -f /home/satish/workspace_v8/projectx_alpha/src/makefile.libs clean

