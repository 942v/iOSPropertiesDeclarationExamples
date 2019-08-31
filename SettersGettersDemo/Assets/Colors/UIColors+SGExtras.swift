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
//////////////////////////////////////////////////////

@objc public extension UIColor {
    
    @objc class func nightBlue() -> UIColor {
        return UIColor(named: "blue")!
    }
}