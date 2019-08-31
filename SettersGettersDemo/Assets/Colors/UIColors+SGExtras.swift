//
//  UIColors+SGExtras.swift
//  SettersGettersDemo
//
//  Created by Guillermo Saenz on 8/31/19.
//  Copyright © 2019 Guillermo Sáenz Urday. All rights reserved.
//

import UIKit

//////////////////////////////////////////////////////
// @objc attribute applied here makes this swift    //
// extension visible to all ObjC classes.           //
// You can find more information regarding          //
// extensions as categories here:                   //
// https://medium.com/@topLayoutGuide/swift-custom-fonts-slightly-less-awful-f235e20027f3 //
//////////////////////////////////////////////////////

@objc public extension UIColor {
    
    @objc class func nightBlue() -> UIColor {
        return UIColor(named: "blue")!
    }
}
