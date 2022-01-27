# NTKExperimentalDigitalFaceBundleWatch
Example watch face bundle

Example project to build watch face bundle.

You can drop the produced bundle into watchOS simulator and use it as a real watch face.

Due to the use of private API, please manually drop in `NanoTimeKit.framework`, `RelevanceEngine.framework`, and `RelevanceEngineUI.framework` from the watchOS simulator to build the project.

After building the watch face bundle, you can copy it to `{SimulatorData}/Library/NanoTimeKit/FaceSupport/ExtractedBundles/{OS Build Number (like 19S51)}` and restart the simulator. The new watch face should appear in selector.

Special thanks to [Michał Kałużny](https://github.com/justMaku) for the [NTKCustomFace project](https://github.com/justMaku/NTKCustomFace) as the reference.