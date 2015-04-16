# Makefile generated by XPJ for linux64
-include Makefile.custom
ProjectName = SnippetStepper
SnippetStepper_cppfiles   += ./../../SnippetCommon/ClassicMain.cpp
SnippetStepper_cppfiles   += ./../../SnippetStepper/SnippetStepper.cpp

SnippetStepper_cpp_debug_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_cc_debug_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.debug.P, $(SnippetStepper_ccfiles)))))
SnippetStepper_c_debug_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_debug_dep      = $(SnippetStepper_cpp_debug_dep) $(SnippetStepper_cc_debug_dep) $(SnippetStepper_c_debug_dep)
-include $(SnippetStepper_debug_dep)
SnippetStepper_cpp_checked_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_cc_checked_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.checked.P, $(SnippetStepper_ccfiles)))))
SnippetStepper_c_checked_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_checked_dep      = $(SnippetStepper_cpp_checked_dep) $(SnippetStepper_cc_checked_dep) $(SnippetStepper_c_checked_dep)
-include $(SnippetStepper_checked_dep)
SnippetStepper_cpp_profile_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_cc_profile_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.profile.P, $(SnippetStepper_ccfiles)))))
SnippetStepper_c_profile_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_profile_dep      = $(SnippetStepper_cpp_profile_dep) $(SnippetStepper_cc_profile_dep) $(SnippetStepper_c_profile_dep)
-include $(SnippetStepper_profile_dep)
SnippetStepper_cpp_release_dep    = $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.P, $(SnippetStepper_cppfiles)))))
SnippetStepper_cc_release_dep    = $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.release.P, $(SnippetStepper_ccfiles)))))
SnippetStepper_c_release_dep      = $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.P, $(SnippetStepper_cfiles)))))
SnippetStepper_release_dep      = $(SnippetStepper_cpp_release_dep) $(SnippetStepper_cc_release_dep) $(SnippetStepper_c_release_dep)
-include $(SnippetStepper_release_dep)
SnippetStepper_debug_hpaths    := 
SnippetStepper_debug_hpaths    += ./../../../Include
SnippetStepper_debug_lpaths    := 
SnippetStepper_debug_lpaths    += ./../../../Lib/linux64
SnippetStepper_debug_lpaths    += ./../../lib/linux64
SnippetStepper_debug_lpaths    += ./../../../Bin/linux64
SnippetStepper_debug_lpaths    += ./../../lib/linux64
SnippetStepper_debug_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_debug_defines   += PHYSX_PROFILE_SDK
SnippetStepper_debug_defines   += RENDER_SNIPPET
SnippetStepper_debug_defines   += _DEBUG
SnippetStepper_debug_defines   += PX_DEBUG
SnippetStepper_debug_defines   += PX_CHECKED
SnippetStepper_debug_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetStepper_debug_libraries := 
SnippetStepper_debug_libraries += SnippetRenderDEBUG
SnippetStepper_debug_libraries += SnippetUtilsDEBUG
SnippetStepper_debug_libraries += PhysX3DEBUG_x64
SnippetStepper_debug_libraries += PhysX3CommonDEBUG_x64
SnippetStepper_debug_libraries += PhysX3CookingDEBUG_x64
SnippetStepper_debug_libraries += PhysX3CharacterKinematicDEBUG_x64
SnippetStepper_debug_libraries += PhysX3ExtensionsDEBUG
SnippetStepper_debug_libraries += PhysX3VehicleDEBUG
SnippetStepper_debug_libraries += PhysXProfileSDKDEBUG
SnippetStepper_debug_libraries += PhysXVisualDebuggerSDKDEBUG
SnippetStepper_debug_libraries += PxTaskDEBUG
SnippetStepper_debug_libraries += SnippetUtilsDEBUG
SnippetStepper_debug_libraries += SnippetRenderDEBUG
SnippetStepper_debug_libraries += GL
SnippetStepper_debug_libraries += GLU
SnippetStepper_debug_libraries += glut
SnippetStepper_debug_libraries += X11
SnippetStepper_debug_libraries += rt
SnippetStepper_debug_libraries += pthread
SnippetStepper_debug_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_debug_common_cflags    += -MMD
SnippetStepper_debug_common_cflags    += $(addprefix -D, $(SnippetStepper_debug_defines))
SnippetStepper_debug_common_cflags    += $(addprefix -I, $(SnippetStepper_debug_hpaths))
SnippetStepper_debug_common_cflags  += -m64
SnippetStepper_debug_cflags	:= $(SnippetStepper_debug_common_cflags)
SnippetStepper_debug_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_debug_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_debug_cflags  += -Wno-long-long
SnippetStepper_debug_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_debug_cflags  += -Wno-unused-parameter
SnippetStepper_debug_cflags  += -g3 -gdwarf-2
SnippetStepper_debug_cppflags	:= $(SnippetStepper_debug_common_cflags)
SnippetStepper_debug_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_debug_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_debug_cppflags  += -Wno-long-long
SnippetStepper_debug_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_debug_cppflags  += -Wno-unused-parameter
SnippetStepper_debug_cppflags  += -g3 -gdwarf-2
SnippetStepper_debug_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_debug_lflags    += $(addprefix -L, $(SnippetStepper_debug_lpaths))
SnippetStepper_debug_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_debug_libraries)) -Wl,--end-group
SnippetStepper_debug_lflags  += -lrt
SnippetStepper_debug_lflags  += -Wl,-rpath ./
SnippetStepper_debug_lflags  += -m64
SnippetStepper_debug_objsdir  = $(OBJS_DIR)/SnippetStepper_debug
SnippetStepper_debug_cpp_o    = $(addprefix $(SnippetStepper_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_debug_cc_o    = $(addprefix $(SnippetStepper_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(SnippetStepper_ccfiles)))))
SnippetStepper_debug_c_o      = $(addprefix $(SnippetStepper_debug_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_debug_obj      = $(SnippetStepper_debug_cpp_o) $(SnippetStepper_debug_cc_o) $(SnippetStepper_debug_c_o)
SnippetStepper_debug_bin      := ./../../../Bin/linux64/SnippetStepperDEBUG

clean_SnippetStepper_debug: 
	@$(ECHO) clean SnippetStepper debug
	@$(RMDIR) $(SnippetStepper_debug_objsdir)
	@$(RMDIR) $(SnippetStepper_debug_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/debug

build_SnippetStepper_debug: postbuild_SnippetStepper_debug
postbuild_SnippetStepper_debug: mainbuild_SnippetStepper_debug
mainbuild_SnippetStepper_debug: prebuild_SnippetStepper_debug $(SnippetStepper_debug_bin)
prebuild_SnippetStepper_debug:

$(SnippetStepper_debug_bin): $(SnippetStepper_debug_obj) build_SnippetRender_debug build_SnippetUtils_debug 
	mkdir -p `dirname ./../../../Bin/linux64/SnippetStepperDEBUG`
	$(CCLD) $(SnippetStepper_debug_obj) $(SnippetStepper_debug_lflags) -o $(SnippetStepper_debug_bin) 
	$(ECHO) building $@ complete!

SnippetStepper_debug_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_debug_cpp_o): $(SnippetStepper_debug_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling debug $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_debug_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	cp $(SnippetStepper_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_debug_DEPDIR).d

$(SnippetStepper_debug_cc_o): $(SnippetStepper_debug_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling debug $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_debug_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_ccfiles))))))
	cp $(SnippetStepper_debug_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_ccfiles))))).debug.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_ccfiles))))).debug.P; \
	  rm -f $(SnippetStepper_debug_DEPDIR).d

$(SnippetStepper_debug_c_o): $(SnippetStepper_debug_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling debug $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(SnippetStepper_debug_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	cp $(SnippetStepper_debug_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_debug_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/debug/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_debug_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_debug_DEPDIR).d

SnippetStepper_checked_hpaths    := 
SnippetStepper_checked_hpaths    += ./../../../Include
SnippetStepper_checked_lpaths    := 
SnippetStepper_checked_lpaths    += ./../../../Lib/linux64
SnippetStepper_checked_lpaths    += ./../../lib/linux64
SnippetStepper_checked_lpaths    += ./../../../Bin/linux64
SnippetStepper_checked_lpaths    += ./../../lib/linux64
SnippetStepper_checked_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_checked_defines   += PHYSX_PROFILE_SDK
SnippetStepper_checked_defines   += RENDER_SNIPPET
SnippetStepper_checked_defines   += NDEBUG
SnippetStepper_checked_defines   += PX_CHECKED
SnippetStepper_checked_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetStepper_checked_libraries := 
SnippetStepper_checked_libraries += SnippetRenderCHECKED
SnippetStepper_checked_libraries += SnippetUtilsCHECKED
SnippetStepper_checked_libraries += PhysX3CHECKED_x64
SnippetStepper_checked_libraries += PhysX3CommonCHECKED_x64
SnippetStepper_checked_libraries += PhysX3CookingCHECKED_x64
SnippetStepper_checked_libraries += PhysX3CharacterKinematicCHECKED_x64
SnippetStepper_checked_libraries += PhysX3ExtensionsCHECKED
SnippetStepper_checked_libraries += PhysX3VehicleCHECKED
SnippetStepper_checked_libraries += PhysXProfileSDKCHECKED
SnippetStepper_checked_libraries += PhysXVisualDebuggerSDKCHECKED
SnippetStepper_checked_libraries += PxTaskCHECKED
SnippetStepper_checked_libraries += SnippetUtilsCHECKED
SnippetStepper_checked_libraries += SnippetRenderCHECKED
SnippetStepper_checked_libraries += GL
SnippetStepper_checked_libraries += GLU
SnippetStepper_checked_libraries += glut
SnippetStepper_checked_libraries += X11
SnippetStepper_checked_libraries += rt
SnippetStepper_checked_libraries += pthread
SnippetStepper_checked_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_checked_common_cflags    += -MMD
SnippetStepper_checked_common_cflags    += $(addprefix -D, $(SnippetStepper_checked_defines))
SnippetStepper_checked_common_cflags    += $(addprefix -I, $(SnippetStepper_checked_hpaths))
SnippetStepper_checked_common_cflags  += -m64
SnippetStepper_checked_cflags	:= $(SnippetStepper_checked_common_cflags)
SnippetStepper_checked_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_checked_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_checked_cflags  += -Wno-long-long
SnippetStepper_checked_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_checked_cflags  += -Wno-unused-parameter
SnippetStepper_checked_cflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetStepper_checked_cppflags	:= $(SnippetStepper_checked_common_cflags)
SnippetStepper_checked_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_checked_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_checked_cppflags  += -Wno-long-long
SnippetStepper_checked_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_checked_cppflags  += -Wno-unused-parameter
SnippetStepper_checked_cppflags  += -g3 -gdwarf-2 -O3 -fno-strict-aliasing
SnippetStepper_checked_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_checked_lflags    += $(addprefix -L, $(SnippetStepper_checked_lpaths))
SnippetStepper_checked_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_checked_libraries)) -Wl,--end-group
SnippetStepper_checked_lflags  += -lrt
SnippetStepper_checked_lflags  += -Wl,-rpath ./
SnippetStepper_checked_lflags  += -m64
SnippetStepper_checked_objsdir  = $(OBJS_DIR)/SnippetStepper_checked
SnippetStepper_checked_cpp_o    = $(addprefix $(SnippetStepper_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_checked_cc_o    = $(addprefix $(SnippetStepper_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(SnippetStepper_ccfiles)))))
SnippetStepper_checked_c_o      = $(addprefix $(SnippetStepper_checked_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_checked_obj      = $(SnippetStepper_checked_cpp_o) $(SnippetStepper_checked_cc_o) $(SnippetStepper_checked_c_o)
SnippetStepper_checked_bin      := ./../../../Bin/linux64/SnippetStepperCHECKED

clean_SnippetStepper_checked: 
	@$(ECHO) clean SnippetStepper checked
	@$(RMDIR) $(SnippetStepper_checked_objsdir)
	@$(RMDIR) $(SnippetStepper_checked_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/checked

build_SnippetStepper_checked: postbuild_SnippetStepper_checked
postbuild_SnippetStepper_checked: mainbuild_SnippetStepper_checked
mainbuild_SnippetStepper_checked: prebuild_SnippetStepper_checked $(SnippetStepper_checked_bin)
prebuild_SnippetStepper_checked:

$(SnippetStepper_checked_bin): $(SnippetStepper_checked_obj) build_SnippetRender_checked build_SnippetUtils_checked 
	mkdir -p `dirname ./../../../Bin/linux64/SnippetStepperCHECKED`
	$(CCLD) $(SnippetStepper_checked_obj) $(SnippetStepper_checked_lflags) -o $(SnippetStepper_checked_bin) 
	$(ECHO) building $@ complete!

SnippetStepper_checked_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_checked_cpp_o): $(SnippetStepper_checked_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling checked $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_checked_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	cp $(SnippetStepper_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_checked_DEPDIR).d

$(SnippetStepper_checked_cc_o): $(SnippetStepper_checked_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling checked $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_checked_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_ccfiles))))))
	cp $(SnippetStepper_checked_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_ccfiles))))).checked.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_ccfiles))))).checked.P; \
	  rm -f $(SnippetStepper_checked_DEPDIR).d

$(SnippetStepper_checked_c_o): $(SnippetStepper_checked_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling checked $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(SnippetStepper_checked_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	cp $(SnippetStepper_checked_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_checked_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/checked/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_checked_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_checked_DEPDIR).d

SnippetStepper_profile_hpaths    := 
SnippetStepper_profile_hpaths    += ./../../../Include
SnippetStepper_profile_lpaths    := 
SnippetStepper_profile_lpaths    += ./../../../Lib/linux64
SnippetStepper_profile_lpaths    += ./../../lib/linux64
SnippetStepper_profile_lpaths    += ./../../../Bin/linux64
SnippetStepper_profile_lpaths    += ./../../lib/linux64
SnippetStepper_profile_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_profile_defines   += PHYSX_PROFILE_SDK
SnippetStepper_profile_defines   += RENDER_SNIPPET
SnippetStepper_profile_defines   += NDEBUG
SnippetStepper_profile_defines   += PX_PROFILE
SnippetStepper_profile_defines   += PX_SUPPORT_VISUAL_DEBUGGER
SnippetStepper_profile_libraries := 
SnippetStepper_profile_libraries += SnippetRenderPROFILE
SnippetStepper_profile_libraries += SnippetUtilsPROFILE
SnippetStepper_profile_libraries += PhysX3PROFILE_x64
SnippetStepper_profile_libraries += PhysX3CommonPROFILE_x64
SnippetStepper_profile_libraries += PhysX3CookingPROFILE_x64
SnippetStepper_profile_libraries += PhysX3CharacterKinematicPROFILE_x64
SnippetStepper_profile_libraries += PhysX3ExtensionsPROFILE
SnippetStepper_profile_libraries += PhysX3VehiclePROFILE
SnippetStepper_profile_libraries += PhysXProfileSDKPROFILE
SnippetStepper_profile_libraries += PhysXVisualDebuggerSDKPROFILE
SnippetStepper_profile_libraries += PxTaskPROFILE
SnippetStepper_profile_libraries += SnippetUtilsPROFILE
SnippetStepper_profile_libraries += SnippetRenderPROFILE
SnippetStepper_profile_libraries += GL
SnippetStepper_profile_libraries += GLU
SnippetStepper_profile_libraries += glut
SnippetStepper_profile_libraries += X11
SnippetStepper_profile_libraries += rt
SnippetStepper_profile_libraries += pthread
SnippetStepper_profile_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_profile_common_cflags    += -MMD
SnippetStepper_profile_common_cflags    += $(addprefix -D, $(SnippetStepper_profile_defines))
SnippetStepper_profile_common_cflags    += $(addprefix -I, $(SnippetStepper_profile_hpaths))
SnippetStepper_profile_common_cflags  += -m64
SnippetStepper_profile_cflags	:= $(SnippetStepper_profile_common_cflags)
SnippetStepper_profile_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_profile_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_profile_cflags  += -Wno-long-long
SnippetStepper_profile_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_profile_cflags  += -Wno-unused-parameter
SnippetStepper_profile_cflags  += -O3 -fno-strict-aliasing
SnippetStepper_profile_cppflags	:= $(SnippetStepper_profile_common_cflags)
SnippetStepper_profile_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_profile_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_profile_cppflags  += -Wno-long-long
SnippetStepper_profile_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_profile_cppflags  += -Wno-unused-parameter
SnippetStepper_profile_cppflags  += -O3 -fno-strict-aliasing
SnippetStepper_profile_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_profile_lflags    += $(addprefix -L, $(SnippetStepper_profile_lpaths))
SnippetStepper_profile_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_profile_libraries)) -Wl,--end-group
SnippetStepper_profile_lflags  += -lrt
SnippetStepper_profile_lflags  += -Wl,-rpath ./
SnippetStepper_profile_lflags  += -m64
SnippetStepper_profile_objsdir  = $(OBJS_DIR)/SnippetStepper_profile
SnippetStepper_profile_cpp_o    = $(addprefix $(SnippetStepper_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_profile_cc_o    = $(addprefix $(SnippetStepper_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(SnippetStepper_ccfiles)))))
SnippetStepper_profile_c_o      = $(addprefix $(SnippetStepper_profile_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_profile_obj      = $(SnippetStepper_profile_cpp_o) $(SnippetStepper_profile_cc_o) $(SnippetStepper_profile_c_o)
SnippetStepper_profile_bin      := ./../../../Bin/linux64/SnippetStepperPROFILE

clean_SnippetStepper_profile: 
	@$(ECHO) clean SnippetStepper profile
	@$(RMDIR) $(SnippetStepper_profile_objsdir)
	@$(RMDIR) $(SnippetStepper_profile_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/profile

build_SnippetStepper_profile: postbuild_SnippetStepper_profile
postbuild_SnippetStepper_profile: mainbuild_SnippetStepper_profile
mainbuild_SnippetStepper_profile: prebuild_SnippetStepper_profile $(SnippetStepper_profile_bin)
prebuild_SnippetStepper_profile:

$(SnippetStepper_profile_bin): $(SnippetStepper_profile_obj) build_SnippetRender_profile build_SnippetUtils_profile 
	mkdir -p `dirname ./../../../Bin/linux64/SnippetStepperPROFILE`
	$(CCLD) $(SnippetStepper_profile_obj) $(SnippetStepper_profile_lflags) -o $(SnippetStepper_profile_bin) 
	$(ECHO) building $@ complete!

SnippetStepper_profile_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_profile_cpp_o): $(SnippetStepper_profile_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling profile $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_profile_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	cp $(SnippetStepper_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_profile_DEPDIR).d

$(SnippetStepper_profile_cc_o): $(SnippetStepper_profile_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling profile $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_profile_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_ccfiles))))))
	cp $(SnippetStepper_profile_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_ccfiles))))).profile.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_ccfiles))))).profile.P; \
	  rm -f $(SnippetStepper_profile_DEPDIR).d

$(SnippetStepper_profile_c_o): $(SnippetStepper_profile_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling profile $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(SnippetStepper_profile_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	cp $(SnippetStepper_profile_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_profile_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/profile/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_profile_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_profile_DEPDIR).d

SnippetStepper_release_hpaths    := 
SnippetStepper_release_hpaths    += ./../../../Include
SnippetStepper_release_lpaths    := 
SnippetStepper_release_lpaths    += ./../../../Lib/linux64
SnippetStepper_release_lpaths    += ./../../lib/linux64
SnippetStepper_release_lpaths    += ./../../../Bin/linux64
SnippetStepper_release_lpaths    += ./../../lib/linux64
SnippetStepper_release_defines   := $(SnippetStepper_custom_defines)
SnippetStepper_release_defines   += PHYSX_PROFILE_SDK
SnippetStepper_release_defines   += RENDER_SNIPPET
SnippetStepper_release_defines   += NDEBUG
SnippetStepper_release_libraries := 
SnippetStepper_release_libraries += SnippetRender
SnippetStepper_release_libraries += SnippetUtils
SnippetStepper_release_libraries += PhysX3_x64
SnippetStepper_release_libraries += PhysX3Common_x64
SnippetStepper_release_libraries += PhysX3Cooking_x64
SnippetStepper_release_libraries += PhysX3CharacterKinematic_x64
SnippetStepper_release_libraries += PhysX3Extensions
SnippetStepper_release_libraries += PhysX3Vehicle
SnippetStepper_release_libraries += PhysXProfileSDK
SnippetStepper_release_libraries += PhysXVisualDebuggerSDK
SnippetStepper_release_libraries += PxTask
SnippetStepper_release_libraries += SnippetUtils
SnippetStepper_release_libraries += SnippetRender
SnippetStepper_release_libraries += GL
SnippetStepper_release_libraries += GLU
SnippetStepper_release_libraries += glut
SnippetStepper_release_libraries += X11
SnippetStepper_release_libraries += rt
SnippetStepper_release_libraries += pthread
SnippetStepper_release_common_cflags	:= $(SnippetStepper_custom_cflags)
SnippetStepper_release_common_cflags    += -MMD
SnippetStepper_release_common_cflags    += $(addprefix -D, $(SnippetStepper_release_defines))
SnippetStepper_release_common_cflags    += $(addprefix -I, $(SnippetStepper_release_hpaths))
SnippetStepper_release_common_cflags  += -m64
SnippetStepper_release_cflags	:= $(SnippetStepper_release_common_cflags)
SnippetStepper_release_cflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_release_cflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_release_cflags  += -Wno-long-long
SnippetStepper_release_cflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_release_cflags  += -Wno-unused-parameter
SnippetStepper_release_cflags  += -O3 -fno-strict-aliasing
SnippetStepper_release_cppflags	:= $(SnippetStepper_release_common_cflags)
SnippetStepper_release_cppflags  += -Werror -m64 -fPIC -msse2 -mfpmath=sse -ffast-math -fno-exceptions -fno-rtti -fvisibility=hidden -fvisibility-inlines-hidden
SnippetStepper_release_cppflags  += -Wall -Wextra -Wstrict-aliasing=2 -fdiagnostics-show-option
SnippetStepper_release_cppflags  += -Wno-long-long
SnippetStepper_release_cppflags  += -Wno-unknown-pragmas -Wno-invalid-offsetof -Wno-uninitialized
SnippetStepper_release_cppflags  += -Wno-unused-parameter
SnippetStepper_release_cppflags  += -O3 -fno-strict-aliasing
SnippetStepper_release_lflags    := $(SnippetStepper_custom_lflags)
SnippetStepper_release_lflags    += $(addprefix -L, $(SnippetStepper_release_lpaths))
SnippetStepper_release_lflags    += -Wl,--start-group $(addprefix -l, $(SnippetStepper_release_libraries)) -Wl,--end-group
SnippetStepper_release_lflags  += -lrt
SnippetStepper_release_lflags  += -Wl,-rpath ./
SnippetStepper_release_lflags  += -m64
SnippetStepper_release_objsdir  = $(OBJS_DIR)/SnippetStepper_release
SnippetStepper_release_cpp_o    = $(addprefix $(SnippetStepper_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cpp, %.cpp.o, $(SnippetStepper_cppfiles)))))
SnippetStepper_release_cc_o    = $(addprefix $(SnippetStepper_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.cc, %.cc.o, $(SnippetStepper_ccfiles)))))
SnippetStepper_release_c_o      = $(addprefix $(SnippetStepper_release_objsdir)/, $(subst ./, , $(subst ../, , $(patsubst %.c, %.c.o, $(SnippetStepper_cfiles)))))
SnippetStepper_release_obj      = $(SnippetStepper_release_cpp_o) $(SnippetStepper_release_cc_o) $(SnippetStepper_release_c_o)
SnippetStepper_release_bin      := ./../../../Bin/linux64/SnippetStepper

clean_SnippetStepper_release: 
	@$(ECHO) clean SnippetStepper release
	@$(RMDIR) $(SnippetStepper_release_objsdir)
	@$(RMDIR) $(SnippetStepper_release_bin)
	@$(RMDIR) $(DEPSDIR)/SnippetStepper/release

build_SnippetStepper_release: postbuild_SnippetStepper_release
postbuild_SnippetStepper_release: mainbuild_SnippetStepper_release
mainbuild_SnippetStepper_release: prebuild_SnippetStepper_release $(SnippetStepper_release_bin)
prebuild_SnippetStepper_release:

$(SnippetStepper_release_bin): $(SnippetStepper_release_obj) build_SnippetRender_release build_SnippetUtils_release 
	mkdir -p `dirname ./../../../Bin/linux64/SnippetStepper`
	$(CCLD) $(SnippetStepper_release_obj) $(SnippetStepper_release_lflags) -o $(SnippetStepper_release_bin) 
	$(ECHO) building $@ complete!

SnippetStepper_release_DEPDIR = $(dir $(@))/$(*F)
$(SnippetStepper_release_cpp_o): $(SnippetStepper_release_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling release $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_release_cppflags) -c $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles)) -o $@
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))))))
	cp $(SnippetStepper_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cpp.o,.cpp, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cppfiles))))).P; \
	  rm -f $(SnippetStepper_release_DEPDIR).d

$(SnippetStepper_release_cc_o): $(SnippetStepper_release_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling release $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_ccfiles))...
	mkdir -p $(dir $(@))
	$(CXX) $(SnippetStepper_release_cppflags) -c $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_ccfiles)) -o $@
	mkdir -p $(dir $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_ccfiles))))))
	cp $(SnippetStepper_release_DEPDIR).d $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_ccfiles))))).release.P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .cc.o,.cc, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_ccfiles))))).release.P; \
	  rm -f $(SnippetStepper_release_DEPDIR).d

$(SnippetStepper_release_c_o): $(SnippetStepper_release_objsdir)/%.o:
	$(ECHO) SnippetStepper: compiling release $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))...
	mkdir -p $(dir $(@))
	$(CC) $(SnippetStepper_release_cflags) -c $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles)) -o $@ 
	@mkdir -p $(dir $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))))))
	cp $(SnippetStepper_release_DEPDIR).d $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  sed -e 's/#.*//' -e 's/^[^:]*: *//' -e 's/ *\\$$//' \
		-e '/^$$/ d' -e 's/$$/ :/' < $(SnippetStepper_release_DEPDIR).d >> $(addprefix $(DEPSDIR)/SnippetStepper/release/, $(subst ./, , $(subst ../, , $(filter %$(strip $(subst .c.o,.c, $(subst $(SnippetStepper_release_objsdir),, $@))), $(SnippetStepper_cfiles))))).P; \
	  rm -f $(SnippetStepper_release_DEPDIR).d

clean_SnippetStepper:  clean_SnippetStepper_debug clean_SnippetStepper_checked clean_SnippetStepper_profile clean_SnippetStepper_release
	rm -rf $(DEPSDIR)

export VERBOSE
ifndef VERBOSE
.SILENT:
endif
