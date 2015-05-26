
// ............................................................................
// Core Features:

// 1.2

E(EXT_blend_minmax)
    F(glBlendEquation)

E(EXT_blend_subtract)

E(EXT_draw_range_elements)
    F(glDrawRangeElements)

// 1.3

E(ARB_multitexture)
    F(glActiveTexture)

// 1.4

E(ARB_depth_texture)

E(ARB_point_parameters)
    F(glPointParameterf)
    F(glPointParameterfv)
    F(glPointParameteri)
    F(glPointParameteriv)

E(EXT_multi_draw_arrays)
    F(glMultiDrawArrays)
    F(glMultiDrawElements)

E(EXT_blend_color)
    F(glBlendColor)

E(EXT_blend_func_separate)
    F(glBlendFuncSeparate)

// 1.5

E(ARB_occlusion_query)
    F(glGenQueries)
    F(glDeleteQueries)
    F(glIsQuery)
    F(glBeginQuery)
    F(glEndQuery)
    F(glGetQueryiv)
    F(glGetQueryObjectiv)
    F(glGetQueryObjectuiv)

E(ARB_vertex_buffer_object)
    F(glBindBuffer)
    F(glDeleteBuffers)
    F(glGenBuffers)
    F(glBufferData)
    F(glBufferSubData)
    F(glGetBufferSubData)
    F(glMapBuffer)
    F(glUnmapBuffer)
    F(glGetBufferParameteriv)
    F(glGetBufferPointerv)

// 2.0

E(ARB_texture_non_power_of_two)
E(ARB_point_sprite)

E(ARB_draw_buffers)
    F(glDrawBuffers)

E(EXT_blend_equation_separate)
    F(glBlendEquationSeparate)

E(ARB_shader_objects)
    F(glAttachShader)
    F(glCompileShader)
    F(glCreateProgram)
    F(glCreateShader)
    F(glDeleteProgram)
    F(glDeleteShader)
    F(glDetachShader)
    F(glGetActiveUniform)
    F(glGetAttachedShaders)
    F(glGetProgramiv)
    F(glGetProgramInfoLog)
    F(glGetShaderiv)
    F(glGetShaderInfoLog)
    F(glGetShaderSource)
    F(glGetUniformLocation)
    F(glGetUniformfv)
    F(glGetUniformiv)
    F(glIsProgram)
    F(glIsShader)
    F(glLinkProgram)
    F(glShaderSource)
    F(glUseProgram)
    F(glUniform1f)
    F(glUniform2f)
    F(glUniform3f)
    F(glUniform4f)
    F(glUniform1i)
    F(glUniform2i)
    F(glUniform3i)
    F(glUniform4i)
    F(glUniform1fv)
    F(glUniform2fv)
    F(glUniform3fv)
    F(glUniform4fv)
    F(glUniform1iv)
    F(glUniform2iv)
    F(glUniform3iv)
    F(glUniform4iv)
    F(glUniformMatrix2fv)
    F(glUniformMatrix3fv)
    F(glUniformMatrix4fv)
    F(glValidateProgram)

E(ARB_vertex_shader)
    F(glBindAttribLocation)
    F(glDisableVertexAttribArray)
    F(glEnableVertexAttribArray)
    F(glGetActiveAttrib)
    F(glGetAttribLocation)
    F(glGetVertexAttribdv)
    F(glGetVertexAttribfv)
    F(glGetVertexAttribiv)
    F(glGetVertexAttribPointerv)
    F(glVertexAttrib1d)
    F(glVertexAttrib1dv)
    F(glVertexAttrib1f)
    F(glVertexAttrib1fv)
    F(glVertexAttrib1s)
    F(glVertexAttrib1sv)
    F(glVertexAttrib2d)
    F(glVertexAttrib2dv)
    F(glVertexAttrib2f)
    F(glVertexAttrib2fv)
    F(glVertexAttrib2s)
    F(glVertexAttrib2sv)
    F(glVertexAttrib3d)
    F(glVertexAttrib3dv)
    F(glVertexAttrib3f)
    F(glVertexAttrib3fv)
    F(glVertexAttrib3s)
    F(glVertexAttrib3sv)
    F(glVertexAttrib4Nbv)
    F(glVertexAttrib4Niv)
    F(glVertexAttrib4Nsv)
    F(glVertexAttrib4Nub)
    F(glVertexAttrib4Nubv)
    F(glVertexAttrib4Nuiv)
    F(glVertexAttrib4Nusv)
    F(glVertexAttrib4bv)
    F(glVertexAttrib4d)
    F(glVertexAttrib4dv)
    F(glVertexAttrib4f)
    F(glVertexAttrib4fv)
    F(glVertexAttrib4iv)
    F(glVertexAttrib4s)
    F(glVertexAttrib4sv)
    F(glVertexAttrib4ubv)
    F(glVertexAttrib4uiv)
    F(glVertexAttrib4usv)
    F(glVertexAttribPointer)

E(ARB_fragment_shader)
E(ARB_shading_language_100)

// 2.1

E(ARB_pixel_buffer_object)
    I(ARB_vertex_buffer_object) // inherit functions from ARB_vertex_buffer_object

// 3.0

E(ARB_framebuffer_object)
    F(glIsRenderbuffer)
    F(glBindRenderbuffer)
    F(glDeleteRenderbuffers)
    F(glGenRenderbuffers)
    F(glRenderbufferStorage)
    F(glGetRenderbufferParameteriv)
    F(glIsFramebuffer)
    F(glBindFramebuffer)
    F(glDeleteFramebuffers)
    F(glGenFramebuffers)
    F(glCheckFramebufferStatus)
    F(glFramebufferTexture1D)
    F(glFramebufferTexture2D)
    F(glFramebufferTexture3D)
    F(glFramebufferRenderbuffer)
    F(glGetFramebufferAttachmentParameteriv)
    F(glGenerateMipmap)
    F(glBlitFramebuffer)
    F(glRenderbufferStorageMultisample)
    F(glFramebufferTextureLayer)

E(ARB_vertex_array_object)
    F(glBindVertexArray)
    F(glDeleteVertexArrays)
    F(glGenVertexArrays)
    F(glIsVertexArray)

// 3.1

E(ARB_copy_buffer)
    F(glCopyBufferSubData)

E(ARB_texture_rectangle)

// 3.2

E(ARB_provoking_vertex)
    F(glProvokingVertex)

// 3.3

E(ARB_explicit_attrib_location)

E(ARB_timer_query)
    I(ARB_occlusion_query)
    F(glQueryCounter)
    F(glGetQueryObjecti64v)
    F(glGetQueryObjectui64v)

// 4.1

E(ARB_ES2_compatibility)
    F(glReleaseShaderCompiler)
    F(glShaderBinary)
    F(glGetShaderPrecisionFormat)
    F(glDepthRangef)
    F(glClearDepthf)

E(ARB_separate_shader_objects)
    F(glUseProgramStages)
    F(glActiveShaderProgram)
    F(glCreateShaderProgramv)
    F(glBindProgramPipeline)
    F(glDeleteProgramPipelines)
    F(glGenProgramPipelines)
    F(glIsProgramPipeline)
    F(glGetProgramPipelineiv)
    F(glProgramUniform1i)
    F(glProgramUniform1iv)
    F(glProgramUniform1f)
    F(glProgramUniform1fv)
    F(glProgramUniform1d)
    F(glProgramUniform1dv)
    F(glProgramUniform1ui)
    F(glProgramUniform1uiv)
    F(glProgramUniform2i)
    F(glProgramUniform2iv)
    F(glProgramUniform2f)
    F(glProgramUniform2fv)
    F(glProgramUniform2d)
    F(glProgramUniform2dv)
    F(glProgramUniform2ui)
    F(glProgramUniform2uiv)
    F(glProgramUniform3i)
    F(glProgramUniform3iv)
    F(glProgramUniform3f)
    F(glProgramUniform3fv)
    F(glProgramUniform3d)
    F(glProgramUniform3dv)
    F(glProgramUniform3ui)
    F(glProgramUniform3uiv)
    F(glProgramUniform4i)
    F(glProgramUniform4iv)
    F(glProgramUniform4f)
    F(glProgramUniform4fv)
    F(glProgramUniform4d)
    F(glProgramUniform4dv)
    F(glProgramUniform4ui)
    F(glProgramUniform4uiv)
    F(glProgramUniformMatrix2fv)
    F(glProgramUniformMatrix3fv)
    F(glProgramUniformMatrix4fv)
    F(glProgramUniformMatrix2dv)
    F(glProgramUniformMatrix3dv)
    F(glProgramUniformMatrix4dv)
    F(glProgramUniformMatrix2x3fv)
    F(glProgramUniformMatrix3x2fv)
    F(glProgramUniformMatrix2x4fv)
    F(glProgramUniformMatrix4x2fv)
    F(glProgramUniformMatrix3x4fv)
    F(glProgramUniformMatrix4x3fv)
    F(glProgramUniformMatrix2x3dv)
    F(glProgramUniformMatrix3x2dv)
    F(glProgramUniformMatrix2x4dv)
    F(glProgramUniformMatrix4x2dv)
    F(glProgramUniformMatrix3x4dv)
    F(glProgramUniformMatrix4x3dv)
    F(glValidateProgramPipeline)
    F(glGetProgramPipelineInfoLog)

// ............................................................................
// Non-Core Features:

// Requires 2.1

E(ARB_map_buffer_range)
    F(glMapBufferRange)
    F(glFlushMappedBufferRange)