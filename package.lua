return {
   package = "github.com/cellux/zz_fluidsynth",
   imports = {
      "github.com/cellux/zz_audio"
   },
   exports = {
      "fluidsynth"
   },
   depends = {
      fluidsynth = { "audio" }
   },
   ldflags = {
      "-lfluidsynth"
   }
}
