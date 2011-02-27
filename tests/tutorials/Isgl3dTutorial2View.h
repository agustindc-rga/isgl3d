/*
 * iSGL3D: http://isgl3d.com
 *
 * Copyright (c) 2010-2011 Stuart Caunt
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

#import "isgl3d.h"

@interface Isgl3dTutorial2View : Isgl3dView3D {

@private
	// The root scene node. 
	Isgl3dScene3D * _scene;
	
	// The mesh node containing the torus mesh
	Isgl3dMeshNode * _torusNode;

	// Three light sources
	Isgl3dLight * _redLight;
	Isgl3dLight * _greenLight;
	Isgl3dLight * _blueLight;

	// Used to calculate the light positions
	float _lightAngle;
}

@end

/*
 * Principal class to be instantiated in main.h. 
 * The window and view are created in Isgl3dAppController, the demo view is returned from viewWithFrame.
 */
#import "Isgl3dAppController.h"
@interface AppController : Isgl3dAppController
- (Isgl3dView3D *) viewWithFrame:(CGRect)frame;
@end